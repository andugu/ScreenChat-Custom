//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SCFrameableContainerView.h"

#import "SCPullToDismissVolumeController.h"
#import "UIGestureRecognizerDelegate.h"

@class AVPlayer, NSArray, NSMutableDictionary, NSString, SCCounterLabel, SCCustomVolumeController, SCHeadset, SCSnapTimer, SCSponsoredSlugView, SCStoriesTimer, UIImageView;

@interface SCMediaView : SCFrameableContainerView <UIGestureRecognizerDelegate, SCPullToDismissVolumeController>
{
    struct CGSize _contentSize;
    _Bool _isLooping;
    _Bool _playerAPlaying;
    _Bool _playerBPlaying;
    _Bool _useLocalPlayers;
    UIImageView *_imageView;
    SCStoriesTimer *_storiesTimer;
    NSMutableDictionary *_activeVideos;
    SCCounterLabel *_counter;
    SCSnapTimer *_snapTimer;
    SCCustomVolumeController *_customVolumeController;
    SCHeadset *_headset;
    NSArray *_overlayImageViews;
    NSArray *_playerViews;
    double _yOffset;
    SCSponsoredSlugView *_slugView;
    long long _sponsoredSlugDisplayCounter;
    AVPlayer *_playerA;
    AVPlayer *_playerB;
}

@property(nonatomic) _Bool useLocalPlayers; // @synthesize useLocalPlayers=_useLocalPlayers;
@property(retain, nonatomic) AVPlayer *playerB; // @synthesize playerB=_playerB;
@property(retain, nonatomic) AVPlayer *playerA; // @synthesize playerA=_playerA;
@property(nonatomic) long long sponsoredSlugDisplayCounter; // @synthesize sponsoredSlugDisplayCounter=_sponsoredSlugDisplayCounter;
@property(retain, nonatomic) SCSponsoredSlugView *slugView; // @synthesize slugView=_slugView;
@property(nonatomic) double yOffset; // @synthesize yOffset=_yOffset;
@property(retain, nonatomic) NSArray *playerViews; // @synthesize playerViews=_playerViews;
@property(nonatomic) _Bool playerBPlaying; // @synthesize playerBPlaying=_playerBPlaying;
@property(nonatomic) _Bool playerAPlaying; // @synthesize playerAPlaying=_playerAPlaying;
@property(retain, nonatomic) NSArray *overlayImageViews; // @synthesize overlayImageViews=_overlayImageViews;
@property(retain, nonatomic) SCHeadset *headset; // @synthesize headset=_headset;
@property(retain, nonatomic) SCCustomVolumeController *customVolumeController; // @synthesize customVolumeController=_customVolumeController;
@property(retain, nonatomic) SCSnapTimer *snapTimer; // @synthesize snapTimer=_snapTimer;
@property(retain, nonatomic) SCCounterLabel *counter; // @synthesize counter=_counter;
@property(retain, nonatomic) NSMutableDictionary *activeVideos; // @synthesize activeVideos=_activeVideos;
@property(retain, nonatomic) SCStoriesTimer *storiesTimer; // @synthesize storiesTimer=_storiesTimer;
@property(nonatomic) _Bool isLooping; // @synthesize isLooping=_isLooping;
@property(retain, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
- (void).cxx_destruct;
- (void)cleanUpCustomVolumeView;
- (void)playerItemDidReachEnd:(id)arg1;
- (void)fadeOutSponsoredSlug;
- (void)enableSponsoredSlug:(id)arg1;
- (void)cleanUpSponsoredSlug;
- (void)completedSettingImageMedia:(_Bool)arg1 playWhenLoaded:(_Bool)arg2 showCounter:(_Bool)arg3 error:(id)arg4 completion:(CDUnknownBlockType)arg5;
- (void)completedSettingVideoMedia:(_Bool)arg1 playWhenLoaded:(_Bool)arg2 showCounter:(_Bool)arg3 error:(id)arg4 completion:(CDUnknownBlockType)arg5;
- (double)timeLeftForMedia:(id)arg1;
- (void)pausePlayer:(id)arg1;
- (void)playPlayer:(id)arg1;
- (id)playerForSlot:(long long)arg1;
- (void)cleanUpAllActiveVideosWaitUntilLoaded:(_Bool)arg1;
- (void)finishedPlayingMedia:(id)arg1;
- (void)cleanUpActiveVideo:(id)arg1 waitUntilLoaded:(_Bool)arg2;
- (void)cleanUpActiveVideoForMedia:(id)arg1;
- (id)activeVideoMediaForMediaId:(id)arg1;
- (id)activeVideoInSlot:(long long)arg1;
- (id)activeVideoForPlayerItem:(id)arg1;
- (long long)availableSlot;
- (void)hidePlayerViews;
- (void)stopLoopingMedia;
- (void)startLoopingMedia;
- (void)unpauseMedia:(id)arg1;
- (void)unpauseMediaWithCounterShown:(id)arg1;
- (void)pauseMedia:(id)arg1;
- (void)pauseMediaWithCounterHidden:(id)arg1;
- (void)hideCounterAnimated:(_Bool)arg1;
- (void)showCounterAnimated:(_Bool)arg1;
- (void)hideActiveVideo:(id)arg1;
- (void)setVolume:(double)arg1;
- (void)hideMedia;
- (void)updateIsLastSnap:(_Bool)arg1;
- (void)updateSnapTimer:(double)arg1 snapTime:(double)arg2 snapTimeLeft:(double)arg3;
- (void)updateStoriesTimerWithTotalTime:(double)arg1 totalTimeLeft:(double)arg2 snapTime:(double)arg3 snapTimeLeft:(double)arg4;
- (void)updateOldTimer:(double)arg1 snapTime:(double)arg2 snapTimeLeft:(double)arg3 counterShape:(long long)arg4;
- (void)resetTimer;
- (void)recalibrateTimer;
- (void)setupPlayers;
- (void)willDeallocatePlayers;
- (void)resetPlayers;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)playerItemChangedStatus:(id)arg1;
- (void)prepareOverlayForMedia:(id)arg1;
- (void)showPlayerLayerForMedia:(id)arg1;
- (void)playerItemReadyForMedia:(id)arg1;
- (void)screenshotMedia:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)setMedia:(id)arg1 withCounter:(_Bool)arg2 timeLeft:(double)arg3 totalTime:(double)arg4 videoTimeSoFar:(double)arg5 playWhenLoaded:(_Bool)arg6 counterShape:(long long)arg7 framing:(id)arg8 completion:(CDUnknownBlockType)arg9;
- (struct CGSize)naturalContentSize;
- (void)_setNaturalContentSizeWithMedia:(id)arg1;
- (void)setMedia:(id)arg1 withCounter:(_Bool)arg2 timeLeft:(double)arg3 totalTime:(double)arg4 counterShape:(long long)arg5 framing:(id)arg6 completion:(CDUnknownBlockType)arg7;
- (void)setMedia:(id)arg1 withCounter:(_Bool)arg2 totalTime:(double)arg3 counterShape:(long long)arg4 framing:(id)arg5 completion:(CDUnknownBlockType)arg6;
- (void)removePlayerViews;
- (void)dealloc;
- (void)showSwipeDownToDismissTooltip;
- (void)showTapToSkipTooltip;
- (void)createPlayerViews;
- (id)initWithFrame:(struct CGRect)arg1 useLocalPlayers:(_Bool)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


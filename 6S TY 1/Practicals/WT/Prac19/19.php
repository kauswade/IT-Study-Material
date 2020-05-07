<?php
	$name=$_POST["loginid"];
	$pass=$_POST["password"];
	if(empty($name))
		die("User Name Empty!");
	else if(empty($pass))
		die("Password Empty!");
	else if($name=="kaustubh" && $pass=="qwerty")
		print(" Welcome Kaustubh.");
	else if($name=="admin" && $pass=="password")
		print(" Welcome Admin.");
	else
		print(" Login Successful!");
?>
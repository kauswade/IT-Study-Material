<?php
	$sname = $_POST["sname"];
	$snum = $_POST["snum"];
	$conn = new mysqli('localhost', 'root', '', 'registration');
	if($conn->connect_error)
		die('Connection Error' .$conn->connect_error);
	$sql = "INSERT INTO student(sname, snum) VALUES('$sname', '$snum')";
	$result = $conn->query($sql);
	if($result)
		print("Successfully Inserted!");
	else
		print("Error".$sql."<br>".$conn->error);
	$conn->close();
?>
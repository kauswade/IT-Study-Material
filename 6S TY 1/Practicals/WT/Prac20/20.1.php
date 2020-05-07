<?php
	$snum = $_POST["snum"];
	$conn = new mysqli('localhost', 'root', '', 'registration');
	if($conn->connect_error)
		die('Connection Error' .$conn->connect_error);
	$sql = "SELECT * FROM student WHERE snum=$snum";
	$result = $conn->query($sql);
	if($result->num_rows > 0)
		while($row = $result->fetch_assoc())
		{	echo "Name : ".$row[sname]. "<br>Enrollment Number : ".$row[snum]."<br>";
		}
	else
		echo "0 Results!";
	$conn->close();
?>
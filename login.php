<?php 
ini_set("display_errors", "1");
error_reporting(E_ALL);
session_start();
require 'admin/connect.php';
extract($_POST);
$password=md5($password);

$query = "SELECT * FROM user WHERE email= ? AND pass= ? limit 1";
$stmt = $db->prepare($query);
$stmt->execute(array($email, $password));
$rows = $stmt->fetchAll();
if ($stmt->rowCount()>0) {
	$_SESSION['email'] = $email;
	$_SESSION['id'] = session_id();
	$_SESSION['login_type'] = "admin";

	echo "<script>window.location.assign('admin/home.php')</script>";
}else{
	echo "<script>alert('Your ID or Password is Wrong');window.location.assign('index.php')</script>";
}
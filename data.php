<?php
require 'admin/connect.php';
$query = "SELECT * FROM device_details WHERE id = 1";
$stmt = $db->prepare($query);
$stmt->execute();
$rows = $stmt->fetch(PDO::FETCH_ASSOC);
if ($stmt->rowCount()>0) {
    $d1=$rows['status'];
}
$query = "SELECT * FROM device_details WHERE id = 2";
$stmt = $db->prepare($query);
$stmt->execute();
$rows = $stmt->fetch(PDO::FETCH_ASSOC);
if ($stmt->rowCount()>0) {
    $d2=$rows['status'];
}
$query = "SELECT * FROM device_details WHERE id = 3";
$stmt = $db->prepare($query);
$stmt->execute();
$rows = $stmt->fetch(PDO::FETCH_ASSOC);
if ($stmt->rowCount()>0) {
    $d3=$rows['status'];
}
$query = "SELECT * FROM device_details WHERE id = 4";
$stmt = $db->prepare($query);
$stmt->execute();
$rows = $stmt->fetch(PDO::FETCH_ASSOC);
if ($stmt->rowCount()>0) {
    $d4=$rows['status'];
}
$query = "SELECT * FROM device_details WHERE id = 5";
$stmt = $db->prepare($query);
$stmt->execute();
$rows = $stmt->fetch(PDO::FETCH_ASSOC);
if ($stmt->rowCount()>0) {
    $d5=$rows['status'];
}
$query = "SELECT * FROM device_details WHERE id = 6";
$stmt = $db->prepare($query);
$stmt->execute();
$rows = $stmt->fetch(PDO::FETCH_ASSOC);
if ($stmt->rowCount()>0) {
    $d6=$rows['status'];
}
$data = array('d1' => $d1,'d2' => $d2,'d3' => $d3,'d4' => $d4,'d5' => $d5,'d6' => $d6);
echo $response = json_encode($data)."\n";
?>
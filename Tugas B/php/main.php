<?php

include "hardware.php";

// menggunakan contruct
$data = new hardware("SATA","S221");

// menggunakan set
$data->setprice("100 USD");
$data->setid("XIX");
$data->setfreq("114 Ghz");
$data->setsize("512 GB");
$data->setcuda("XYZ");

//output
$data->output();

?>
<?php

include "memory.php";

class product extends memory
{
	
	private $price = "";
	private $id = "";
	
	
	//Construct
	public function __construct($price = "", $id = ""){
		$this->price = $price;
		$this->id = $id;
	}
	
	//Set dan get
	public function setprice($price){
		$this->price = $price;
	}
	public function getprice(){
		return $this->price;
	}
	
	public function setid($id){
		$this->id = $id;
	}
	public function getid(){
		return $this->id;
	}
	
}
?>
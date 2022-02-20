<?php

class memory
{
	
	private $freq = "";
	private $size = "";
	private $cuda = "";
	
	
	//Construct
	public function __construct($freq = "", $size = "", $cuda = ""){
		$this->freq = $freq;
		$this->size = $size;
		$this->cuda = $cuda;
	}
	
	//Set dan get
	public function setfreq($freq){
		$this->freq = $freq;
	}
	public function getfreq(){
		return $this->freq;
	}
	
	public function setsize($size){
		$this->size = $size;
	}
	public function getsize(){
		return $this->size;
	}
	
	public function setcuda($cuda){
		$this->cuda = $cuda;
	}
	public function getcuda(){
		return $this->cuda;
	}
}
?>
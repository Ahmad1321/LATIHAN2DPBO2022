<?php

include "product.php";

class hardware extends product
{
	
	private $brand = "";
	private $model = "";
	
	
	//Construct
	public function __construct($brand = "", $model = ""){
		$this->brand = $brand;
		$this->model = $model;
	}
	
	//Set dan get
	public function setbrand($brand){
		$this->brand = $brand;
	}
	public function getbrand(){
		return $this->brand;
	}
	
	public function setmodel($model){
		$this->model = $model;
	}
	public function getmodel(){
		return $this->model;
	}
	
	//output print
	public function output(){
		echo "Brand 	: ". $this->getbrand(). "<br/>";
        echo "Model 	: ". $this->getmodel(). "<br/>";
		echo "Price 	: ". $this->getprice(). "<br/>";
        echo "ID        : ". $this->getid(). "<br/>";
		echo "Frekuensi : ". $this->getfreq(). "<br/>";
        echo "Size 		: ". $this->getsize(). "<br/>";
        echo "Cuda 		: ". $this->getcuda(). "<br/>";
	}
	
}
?>
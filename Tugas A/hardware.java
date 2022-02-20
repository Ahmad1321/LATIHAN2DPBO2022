class hardware extends product{
    private String brand;
    private String model;

    // construct
    public hardware() {}

    public hardware(String brand, String model){
        this.brand = brand;
        this.model = model;
    }
	
	//set and get
	public void setbrand(String brand){
		this.brand = brand;
	}
	public String getbrand(){
		return this.brand;
	}
	
	public void setmodel(String model){
		this.model = model;
	}
	public String getmodel(){
		return this.model;
	}
	
	//Print Output
	public void output()
    {
        System.out.println("Brand 	  : " + getbrand());
        System.out.println("Model 	  : " + getmodel());
		System.out.println("Price 	  : " + this.getprice());
        System.out.println("Id 	  : " + this.getid());
		System.out.println("Frequency : " + this.getfreq());
        System.out.println("Size	  : " + this.getsize());
        System.out.println("Cuda 	  : " + this.getcuda());
    }
}
class product extends memory{
    private String price;
    private String id;

    // construct
    public product() {}

    public product(String price, String id){
        this.price = price;
        this.id = id;
    }
	
	//set and get
	public void setprice(String price){
		this.price = price;
	}
	public String getprice(){
		return this.price;
	}
	
	public void setid(String id){
		this.id = id;
	}
	public String getid(){
		return this.id;
	}

}
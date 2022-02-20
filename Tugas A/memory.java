public class memory{
    private String freq;
    private String size;
    private String cuda;

    // construct
    public memory() {}

    public memory(String freq, String size, String cuda){
        this.freq = freq;
        this.size = size;
        this.cuda = cuda;
    }
	
	//set and get
	public void setfreq(String freq){
		this.freq = freq;
	}
	public String getfreq(){
		return this.freq;
	}
	
	public void setsize(String size){
		this.size = size;
	}
	public String getsize(){
		return this.size;
	}
	
	public void setcuda(String cuda){
		this.cuda = cuda;
	}
	public String getcuda(){
		return this.cuda;
	}

}
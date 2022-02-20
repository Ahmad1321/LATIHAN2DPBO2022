public class Main{
	public static void main(String[] args){

		//Menggunakan Construct
		hardware data = new hardware("SATA","S221");
		
		//Menggunakan Set
		data.setprice("100 USD");
		data.setid("XIX");
		data.setfreq("114 Ghz");
		data.setsize("512 Gb");
		data.setcuda("XYZ");
		
		//Print Output
		data.output();
	}
	
}
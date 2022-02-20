#include "hardware.cpp"
using namespace std;

int main(){
	//Menggunakan Construct
	hardware data("SATA","S221");
	
	//Menggunakan Set
	data.setprice("100 USD");
	data.setid("XIX");
	data.setfreq("114 Ghz");
	data.setsize("512 Gb");
	data.setcuda("XYZ");

	//Print Data	
	data.output();
}
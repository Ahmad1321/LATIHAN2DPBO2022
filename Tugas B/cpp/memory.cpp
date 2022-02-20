#include <iostream>
#include <string>

using namespace std;

class memory{
	private:
		string freq;
        string size;
        string cuda;
	
	public:
		//Construct
		memory(){}
		
		memory(string freq, string size, string cuda){
			this->freq = freq;
			this->size = size;
			this->cuda = cuda;
		}
		
		//Set dan Get
		void setfreq(string freq)
        {
            this->freq = freq;
        }
		string getfreq(){
			return this->freq;
		}
		
		void setsize(string size){
			this->size = size;
		}
		string getsize(){
			return this->size;
		}
		
		void setcuda(string cuda){
			this->cuda = cuda;
		}
		string getcuda(){
			return this->cuda;
		}
			
		
		~memory(){
		}
};
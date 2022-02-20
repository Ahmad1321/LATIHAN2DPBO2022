#include "product.cpp"

class hardware : public product{
	private:
		string brand;
        string model;
	
	public:
		//Construct
		hardware(){}
		
		hardware(string brand, string model){
			this->brand = brand;
			this->model = model;
		}
		
		//Set dan Get
		void setbrand(string brand)
        {
            this->brand = brand;
        }
		string getbrand(){
			return this->brand;
		}
		
		void setmodel(string model){
			this->model = model;
		}
		string getmodel(){
			return this->model;
		}
		
		//Output
		void output(){
			cout << "Brand	 	: " << this->getbrand() << endl;
			cout << "Model	 	: " << this->getmodel() << endl;
			cout << "Price	 	: " << this->getprice() << endl;
			cout << "ID 		: " << this->getid() << endl;
			cout << "Frekuensi       : " << this->getfreq() << endl;
			cout << "Size		: " << this->getsize() << endl;
			cout << "Cuda 		: " << this->getcuda() << endl;
		}
		
		~hardware(){
		}
};
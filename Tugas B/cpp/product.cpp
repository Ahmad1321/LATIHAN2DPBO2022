#include "memory.cpp"

class product : public memory{
	private:
		string price;
        string id;
	
	public:
		//Construct
		product(){}
		
		product(string price, string id){
			this->price = price;
			this->id = id;
		}
		
		//Set dan Get
		void setprice(string price)
        {
            this->price = price;
        }
		string getprice(){
			return this->price;
		}
		
		void setid(string id){
			this->id = id;
		}
		string getid(){
			return this->id;
		}
		
		~product(){
		}
};
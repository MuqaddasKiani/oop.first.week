#include <iostream>
using namespace std;

// Create class product
class Product {
//access specifies
private:
	string name;
	int quantity;
	double price;
//access specifies
public:
//	setter
    void empty();
    void setName(string n){
    	if(n.empty()){
    		cout<<"ERROR! Name cannot be empty."<<endl;
		}else{
			name=n;
		}
	}
	void setPrice(double p){
		if(p>0){
			price=p;
		}else{
			cout<<"ERROR! Price must be greater than zero.."<<endl;
		}
	}
	void setQuantity(int a){
		if(a>=0){
			quantity=a;
		}else{
			cout<<"ERROR! Quantity must be greater than zero.."<<endl;
		}	
	}
    string getName(){
    	return name;
	}
	double getPrice(){
		return price;
	}
	int getQuantity(){
		return quantity;
	}
};


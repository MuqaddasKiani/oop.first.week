#include<iostream>
using namespace std;

//create class
class rectangular{
//access specifies
private:
	int length;
	int width;
	
//access specifies
public:
//	declare member function
void setDimensions();
int area();
int perimeter();
};

//define member outside the class
void rectangular::setDimensions(){
	cout<<"Enter length: ";
	cin>>length;
	cout<<"Enter Width: ";
	cin>>width;
}

int rectangular::area() {
    return length * width;
}

int rectangular::perimeter() {
    return 2 * (length + width);
}

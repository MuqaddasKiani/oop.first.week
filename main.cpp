#include<iostream>
#include<string>
#include"student.h"
#include"Rectangle.h"
#include"Voter.h"
#include"Temprature.h"
#include"Calculator.h"
#include"Product.h"
using namespace std;
 
// TASK1

//call functions
//int main() {
//    Student s1;
//
//    s1.getData();
//    s1.displayData();
//
//    return 0;
//}

//TASK2

//int main(){
//	rectangular rect;
//
////set dimensions
//rect.setDimensions();
//
////display area & perimeter
// cout << "Area: " << rect.area() << endl;
//cout << "Perimeter: " << rect.perimeter() << endl;
//
//return 0;
//
//}
//
////TASK3
//
//int main() {
//    Voter v;
//
//    // Set details (example)
//    string nameInput;
//    int ageInput;
//
//    cout << "Enter name: ";
//    cin >> nameInput;
//
//    cout << "Enter age: ";
//    cin >> ageInput;
//
//    v.setDetails(nameInput, ageInput);
//
//    if (v.isEligible()) {
//        cout << nameInput << " is eligible to vote." << endl;
//    } else {
//        cout << nameInput << " is NOT eligible to vote." << endl;
//    }
//
//    return 0;
//}

////TASK4
//
//using namespace std;
//
//// Create class 
//class Temperature {
////access specifies
//public:
//    // Public data member
//    float celsius;
//
//    // Function to convert to Fahrenheit
//    float toFahrenheit();
//
//    // Function to display the converted value
//    void displayFahrenheit();
//};
//
//// Define member function to convert temperature
//float Temperature::toFahrenheit() {
//    return (celsius * 9.0 / 5.0) + 32;
//}
//
//// Define member function to display result
//void Temperature::displayFahrenheit() {
//    float fahrenheit = toFahrenheit();
//    cout << "Temperature in Fahrenheit: " << fahrenheit << "F" << endl;
//}
//
//// Main function
//int main() {
//    Temperature temp;
//
//    cout << "Enter temperature in Celsius: ";
//    cin >> temp.celsius;
//
//    temp.displayFahrenheit();
//
//    return 0;
//}
//
////TASK5
//
//// Main function 
//int main() {
//    Calculator calc;
//    int choice;
//
//    // Get input from user
//    cout << "Enter first number: ";
//    cin >> calc.num1;
//
//    cout << "Enter second number: ";
//    cin >> calc.num2;
//
//    // Operation menu
//    cout << "\nChoose an operation:\n";
//    cout << "1. Add\n2. Subtract\n3. Multiply\n4. Divide\n";
//    cout << "Enter your choice (1-4): ";
//    cin >> choice;
//
//    // Perform operation based on user choice
//    switch (choice) {
//        case 1:
//            cout << "Result: " << calc.add() << endl;
//            break;
//        case 2:
//            cout << "Result: " << calc.subtract() << endl;
//            break;
//        case 3:
//            cout << "Result: " << calc.multiply() << endl;
//            break;
//        case 4:
//            cout << "Result: " << calc.divide() << endl;
//            break;
//        default:
//            cout << "Invalid choice!" << endl;
//    }
//
//    return 0;
//}
//

//TASK6

     //TEST CODE
     
int main(){
	Product p;
	p.setName("");
	p.setPrice(-50);
	p.setQuantity(-2);
	
	p.setName("Laptop");
	p.setPrice(1200.50);
	p.setQuantity(5);
	
	cout<<"Product:"<<p.getName()<<endl;
	cout<<"Product:"<<p.getPrice()<<endl;
	cout<<"Product:"<<p.getQuantity()<<endl;
	
}
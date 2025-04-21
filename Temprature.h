#include <iostream>
using namespace std;

// Create class 
class Temperature {
//access specifies
public:
    // Public data member
    float celsius;

    // Function to convert to Fahrenheit
    float toFahrenheit();

    // Function to display the converted value
    void displayFahrenheit();
};

// Define member function to convert temperature
float Temperature::toFahrenheit() {
    return (celsius * 9.0 / 5.0) + 32;
}

// Define member function to display result
void Temperature::displayFahrenheit() {
    float fahrenheit = toFahrenheit();
    cout << "Temperature in Fahrenheit: " << fahrenheit << "F" << endl;
}

#include <iostream>
using namespace std;

// Create class Calculator
class Calculator {
//access specifies
public:
    float num1;
    float num2;

    // Member functions
    float add();
    float subtract();
    float multiply();
    float divide();
};

// Define member functions
float Calculator::add() {
    return num1 + num2;
}

float Calculator::subtract() {
    return num1 - num2;
}

float Calculator::multiply() {
    return num1 * num2;
}

float Calculator::divide() {
    if (num2 != 0)
        return num1 / num2;
    else {
        cout << "Error: Division by zero!" << endl;
        return 0;
    }
}

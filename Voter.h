#include <iostream>
using namespace std;

// Create class Voter
class Voter {
private:
    string name;
    int age;

public:
    // Member functions
    void setDetails(string n, int a);
    bool isEligible();
};

// Define member functions outside the class
void Voter::setDetails(string n, int a) {
    name = n;
    age = a;
}

bool Voter::isEligible() {
    return age > 18;
}

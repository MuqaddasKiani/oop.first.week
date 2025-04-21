#include<iostream>
using namespace std;

//create class of student
//member of class(data)
class Student {
//access specifies
private:
//attributes
    string name;
    int rollNumber;
    float marks;
    
//access specifies
public:
//member of class(functions)
    void getData() {
        cout<<"Enter student name: ";
        cin>>name;

        cout<<"Enter roll number: ";
        cin>>rollNumber;

        cout<<"Enter marks: ";
        cin>>marks;
    }

    void displayData() {
        cout << "\n    STUDENT INFORMATION   " << endl;
        cout << "Name: " << name << endl;
        cout << "Roll Number: " << rollNumber << endl;
        cout << "Marks: " << marks << endl;
    }
};

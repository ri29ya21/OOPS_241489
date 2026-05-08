//WAP to demonstrate default, parameterized, copy, and overloaded constructors.
//author – Riya – 241489
#include <iostream>
using namespace std;

class Student {
private:
    int roll;
    string name;

public:

    // 1. Default Constructor
    Student() {
        roll = 0;
        name = "Unknown";
        cout << "Default Constructor Called" << endl;
    }

    // 2. Parameterized Constructor
    Student(int r, string n) {
        roll = r;
        name = n;
        cout << "Parameterized Constructor Called" << endl;
    }

    // 3. Overloaded Constructor
    Student(int r) {
        roll = r;
        name = "Not Assigned";
        cout << "Overloaded Constructor Called" << endl;
    }

    // 4. Copy Constructor
    Student(const Student &s) {
        roll = s.roll;
        name = s.name;
        cout << "Copy Constructor Called" << endl;
    }

    // Display Function
    void display() {
        cout << "Roll No : " << roll << endl;
        cout << "Name    : " << name << endl;
        cout << "-------------------" << endl;
    }
};

int main() {

    // Default Constructor
    Student s1;
    s1.display();

    // Parameterized Constructor
    Student s2(101, "Rahul");
    s2.display();

    // Overloaded Constructor
    Student s3(102);
    s3.display();

    // Copy Constructor
    Student s4 = s2;
    s4.display();

    return 0;
}
OUTPUT:

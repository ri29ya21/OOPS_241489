// Program 9: WAP to demonstrate Function Overriding
// and Runtime Polymorphism.
// Author – Riya -241489

#include <iostream>
using namespace std;

// ----------- Without Virtual Function -----------
// (No Runtime Polymorphism)

class Base1
{
public:
    void show()
    {
        cout << "Base1 show() called" << endl;
    }
};

class Derived1 : public Base1
{
public:
    void show()
    {
        cout << "Derived1 show() called" << endl;
    }
};

// ----------- With Virtual Function -----------
// (Runtime Polymorphism)

class Base2
{
public:
    virtual void show()
    {
        cout << "Base2 show() called" << endl;
    }
};

class Derived2 : public Base2
{
public:
    void show()
    {
        cout << "Derived2 show() called" << endl;
    }
};

// ----------- Main Function -----------

int main()
{
    // Without Virtual Function
    Base1 *ptr1;
    Derived1 obj1;

    ptr1 = &obj1;

    cout << "Without Virtual Function:" << endl;
    ptr1->show();   // Calls Base1 version

    cout << endl;

    // With Virtual Function
    Base2 *ptr2;
    Derived2 obj2;

    ptr2 = &obj2;

    cout << "With Virtual Function:" << endl;
    ptr2->show();   // Calls Derived2 version

    return 0;
}
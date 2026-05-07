// Program 10: WAP to demonstrate Virtual Functions
// and Abstract Classes using Shape Example.
// Author – Riya -241489

#include <iostream>
using namespace std;

// ----------- Abstract Base Class -----------

class Shape
{
public:

    // Pure Virtual Function
    // Makes the class Abstract
    virtual void area() = 0;

    // Virtual Function
    virtual void display()
    {
        cout << "This is a Shape" << endl;
    }
};

// ----------- Derived Class : Circle -----------

class Circle : public Shape
{
private:
    float radius;

public:
    Circle(float r)
    {
        radius = r;
    }

    void area()
    {
        cout << "Area of Circle: "
             << 3.14 * radius * radius << endl;
    }
};

// ----------- Derived Class : Rectangle -----------

class Rectangle : public Shape
{
private:
    float length, breadth;

public:
    Rectangle(float l, float b)
    {
        length = l;
        breadth = b;
    }

    void area()
    {
        cout << "Area of Rectangle: "
             << length * breadth << endl;
    }
};

// ----------- Main Function -----------

int main()
{
    Shape *s;   // Base Class Pointer

    Circle c(5);
    Rectangle r(4, 6);

    // Runtime Polymorphism using Circle Object
    s = &c;
    s->display();
    s->area();

    cout << endl;

    // Runtime Polymorphism using Rectangle Object
    s = &r;
    s->display();
    s->area();

    return 0;
}
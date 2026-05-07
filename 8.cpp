// Program 8: WAP to demonstrate Single, Multiple, Multilevel,
// Hierarchical, and Hybrid Inheritance.
// Author – Riya -241489

#include <iostream>
using namespace std;

// ----------- Base Class -----------

class A
{
public:
    void showA()
    {
        cout << "Class A" << endl;
    }
};

// ----------- Single Inheritance -----------

class B : public A
{
public:
    void showB()
    {
        cout << "Class B (Single Inheritance)" << endl;
    }
};

// ----------- Multilevel Inheritance -----------

class C : public B
{
public:
    void showC()
    {
        cout << "Class C (Multilevel Inheritance)" << endl;
    }
};

// ----------- Multiple Inheritance -----------

class X
{
public:
    void showX()
    {
        cout << "Class X" << endl;
    }
};

class Y
{
public:
    void showY()
    {
        cout << "Class Y" << endl;
    }
};

class Z : public X, public Y
{
public:
    void showZ()
    {
        cout << "Class Z (Multiple Inheritance)" << endl;
    }
};

// ----------- Hierarchical Inheritance -----------

class D : public A
{
public:
    void showD()
    {
        cout << "Class D (Hierarchical Inheritance)" << endl;
    }
};

class E : public A
{
public:
    void showE()
    {
        cout << "Class E (Hierarchical Inheritance)" << endl;
    }
};

// ----------- Hybrid Inheritance -----------
// Combination of Multilevel + Multiple Inheritance

class P
{
public:
    void showP()
    {
        cout << "Class P" << endl;
    }
};

class Q : public P
{
public:
    void showQ()
    {
        cout << "Class Q" << endl;
    }
};

class R
{
public:
    void showR()
    {
        cout << "Class R" << endl;
    }
};

class S : public Q, public R
{
public:
    void showS()
    {
        cout << "Class S (Hybrid Inheritance)" << endl;
    }
};

// ----------- Main Function -----------

int main()
{
    // Single Inheritance
    B b;
    b.showA();
    b.showB();

    cout << endl;

    // Multilevel Inheritance
    C c;
    c.showA();
    c.showB();
    c.showC();

    cout << endl;

    // Multiple Inheritance
    Z z;
    z.showX();
    z.showY();
    z.showZ();

    cout << endl;

    // Hierarchical Inheritance
    D d;
    E e;

    d.showA();
    d.showD();

    e.showA();
    e.showE();

    cout << endl;

    // Hybrid Inheritance
    S s;
    s.showP();
    s.showQ();
    s.showR();
    s.showS();

    return 0;
}
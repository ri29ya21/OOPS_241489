//Program 7: WAP to demonstrate operator overloading for +, -, ++, ==, and << operators. 
// Author – Riya -241489 
#include <iostream>
using namespace std;

class Number
{
private:
    int value;

public:

    // Constructor
    Number(int v = 0)
    {
        value = v;
    }

    // Overloading + operator
    Number operator + (Number n)
    {
        return Number(value + n.value);
    }

    // Overloading - operator
    Number operator - (Number n)
    {
        return Number(value - n.value);
    }

    // Overloading ++ operator (Prefix Increment)
    Number operator ++ ()
    {
        ++value;
        return *this;
    }

    // Overloading == operator
    bool operator == (Number n)
    {
        return (value == n.value);
    }

    // Overloading << operator using friend function
    friend ostream& operator << (ostream &out, Number n);
};

// Definition of << operator
ostream& operator << (ostream &out, Number n)
{
    out << n.value;
    return out;
}

int main()
{
    Number n1(10), n2(5), n3;

    // Using + operator
    n3 = n1 + n2;
    cout << "Addition: " << n3 << endl;

    // Using - operator
    n3 = n1 - n2;
    cout << "Subtraction: " << n3 << endl;

    // Using ++ operator
    ++n1;
    cout << "After Increment: " << n1 << endl;

    // Using == operator
    if (n1 == n2)
        cout << "n1 and n2 are Equal" << endl;
    else
        cout << "n1 and n2 are Not Equal" << endl;

    return 0;
}
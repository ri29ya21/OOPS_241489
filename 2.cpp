// WAP to demonstrate default arguments using simple interest calculation.
#include <iostream> 
using namespace std;

// Function with default arguments
float simpleInterest(float principal, float rate = 5.0, float time = 2.0)
{
    return (principal * rate * time) / 100;
}
int main()
{
    float p;
    cout << "Enter Principal Amount: ";
    cin >> p;

    // Using default rate and time    
     cout << "\nSimple Interest (using default rate & time): "
    << simpleInterest(p) << endl;

    // Providing custom rate    
     cout << "Simple Interest (custom rate = 10%): "
    << simpleInterest(p, 10) << endl;

    // Providing all values    
     cout << "Simple Interest (custom rate & time = 10%, 3 years): "
    << simpleInterest(p, 10, 3) << endl;
    return 0;
}

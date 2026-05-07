//Program 6: WAP to demonstrate dynamic initialization using constructors. 
// Author – Riya -241489 
#include <iostream> 
using namespace std; 
class Interest { 
    private: 
    float principal, rate, time, SI; 
    public: 
    // Constructor for dynamic initialization     
    Interest(float p, float r, float t) {         
        principal = p;         
        rate = r;         
        time = t; 
        SI = (principal * rate * time) / 100; 
    }     
    void display() {         
        cout << "\nPrincipal: " << principal;         
        cout << "\nRate: " << rate;         
        cout << "\nTime: " << time;         
        cout << "\nSimple Interest: " << SI << endl; 
    } 
};  
int main() {     
    float p, r, t;     
    cout << "Enter Principal, Rate and Time: ";    
    cin >> p >> r >> t; 
   // Dynamic initialization at runtime 
   Interest obj(p, r, t); 
    obj.display();     
    return 0; 
} 

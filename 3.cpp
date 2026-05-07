#include <iostream>
 using namespace std; 
 class Calculator {
     public: 
    // ----------- SUM (Overloaded) -----------   
int calculate(int a, int b) {       
          return a + b; 
    } 
int calculate(int a, int b, int c) {      
   return a + b + c; 
    } 
    // ----------- AREA (Overloaded) -----------   
    float calculate(float radius) { // Circle    
        return 3.14 * radius * radius; 
    }    
    float calculate(float length, float breadth) { // Rectangle    
         return length * breadth; 
    } 
    // ----------- VOLUME (Overloaded) -----------    
    float calculate(float side, int flag) { // Cube 
        return side * side * side; 
    }    
    float calculate(float length, float breadth, float height) {   // Cuboid    
             return length * breadth * height; 
    } 
};
 int main() { 
    Calculator obj;     // Sum     
    cout << "Sum of 2 numbers: " << obj.calculate(5, 10) << endl;   
    cout << "Sum of 3 numbers: " << obj.calculate(5, 10, 15) << endl; 
    // Area   
    cout << "\nArea of Circle (r=3): " << obj.calculate(3.0f) << endl; 
    cout << "Area of Rectangle (l=4, b=5): " << obj.calculate(4.0f, 5.0f) << endl;     // Volume 
    cout << "\nVolume of Cube (side=3): " << obj.calculate(3.0f, 1) << endl; 
    cout << "Volume of Cuboid (l=4, b=5, h=6): " << obj.calculate(4.0f, 5.0f, 6.0f) << endl;   
    return 0; 
} 

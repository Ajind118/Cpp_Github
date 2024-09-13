// write a program to calculate area of circle using functions.
 
#include <iostream>
using namespace std;    
 
float areaOfCircle(float r) {
    return 3.14159 * r * r;
}   

int main() {
    float radius;
    cout << "Enter radius of circle: ";
    cin >> radius;
    cout << "Area of circle: " << areaOfCircle(radius);
    return 0;
}
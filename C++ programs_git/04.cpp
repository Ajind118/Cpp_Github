// write a program to swap two numbers using a tempporary variable
 
#include <iostream>
using namespace std;
 
int main() {
    int a, b, temp;
    cout << "Enter the value of a: ";
    cin >> a;
    cout << "Enter the value of b: ";
    cin >> b;
 
    temp = a;
    a = b;
    b = temp;
 
    cout << "The value of a after swapping: " << a << endl;
    cout << "The value of b after swapping: " << b << endl;
    return 0;
}
    
// Output:
// Enter the value of a: 10
// Enter the value of b: 20
// The value of a after swapping: 20
// The value of b after swapping: 10
// In this program, we have two variables a and b. We have declared another variable temp to store the value of a. Then, we assign the value of b to a and the value of temp to b. This way, we have swapped the values of a and b. Finally, we print the values of a and b after swapping.
//
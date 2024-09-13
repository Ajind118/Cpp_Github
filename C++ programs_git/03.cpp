// write a program to swap two variable without using a temporary variable

#include <iostream>
using namespace std;
    
int main() {
    int a, b;
    cout << "Enter the value of a: ";
    cin >> a;
    cout << "Enter the value of b: ";
    cin >> b;

    a = a + b;
    b = a - b;
    a = a - b;

    cout << "The value of a after swapping: " << a << endl;
    cout << "The value of b after swapping: " << b << endl;
    return 0;
}
    
// Output:
// Enter the value of a: 10
// Enter the value of b: 20
// The value of a after swapping: 20
// The value of b after swapping: 10

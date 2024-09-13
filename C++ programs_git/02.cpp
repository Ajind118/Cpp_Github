// write a program to perform addition,subtraction,multiplication and division on integer numbers

#include <iostream>
using namespace std;

int main() {
    int num1, num2;
    cout << "Enter the value of num1: ";
    cin >> num1;
    cout << "Enter the value of num2: ";
    cin >> num2;

    cout << "The sum of two numbers is: " << num1 + num2 << endl;
    cout << "The difference of two numbers is: " << num1 - num2 << endl;
    cout << "The product of two numbers is: " << num1 * num2 << endl;
    cout << "The division of two numbers is: " << num1 / num2 << endl;
    return 0;
}

// Output:
// Enter the value of num1: 10
// Enter the value of num2: 5
// The sum of two numbers is: 15
// The difference of two numbers is: 5
// The product of two numbers is: 50
// The division of two numbers is: 2
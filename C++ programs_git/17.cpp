// write a program to display the largest of 10 number using ternary operator
 
#include <iostream>
using namespace std;
 
int main() {
    int n;
    int largest = 0;
    for (int i = 0; i < 10; i++) {
        cout << "Enter number " << i + 1 << ": ";
        cin >> n;
        largest = (n > largest) ? n : largest;
    }
 
    cout << "Largest number: " << largest;
 
    return 0;
}
// write a program to find whether a given year is leap year or not using OR operator
 
#include <iostream>
using namespace std;
   
int main() {
    int year;
    cout << "Enter the year: ";
    cin >> year;
    if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0) {
        cout << year << " is a leap year." << endl;
    } else {
        cout << year << " is not a leap year." << endl;
    }
    return 0;
}
    
// Output: Enter the year: 2020
// 2020 is a leap year.
// Explanation: The year 2020 is divisible by 4 and not divisible by 100, so it is a leap year.

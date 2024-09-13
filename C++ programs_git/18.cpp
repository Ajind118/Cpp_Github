// write a program to generate calener of a month given the start day and the number of days in that month.
 
#include <iostream>
using namespace std;

int main() {
    int startDay, daysInMonth;
    cout << "Enter start day (1=Sun, 2=Mon, ..., 7=Sat): ";
    cin >> startDay;
    cout << "Enter number of days in month: ";
    cin >> daysInMonth;

    cout << "Sun Mon Tue Wed Thu Fri Sat" << endl;
    for (int i = 1; i < startDay; i++) {
        cout << "    ";
    }

    for (int i = 1; i <= daysInMonth; i++) {
        cout << i;
        if ((startDay + i - 1) % 7 == 0) {
            cout << endl;
        } else {
            cout << " ";
        }
    }

    return 0;
}
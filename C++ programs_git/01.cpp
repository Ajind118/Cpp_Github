// write  a program to calculate the distance between two points

#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double x1, y1, x2, y2, distance;
    cout << "Enter the value of x1: ";
    cin >> x1;
    cout << "Enter the value of y1: ";
    cin >> y1;
    cout << "Enter the value of x2: ";
    cin >> x2;
    cout << "Enter the value of y2: ";
    cin >> y2;

    distance = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
    cout << "The distance between two points is: " << distance << endl;
    return 0;
}
    
// Output:
// Enter the value of x1: 2
// Enter the value of y1: 3
// Enter the value of x2: 4
// Enter the value of y2: 5
// The distance between two points is: 2.82843
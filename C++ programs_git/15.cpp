// write a program using the for loop to calculate average of first n natural numbers.

#include <iostream>
using namespace std;
 
int main() {
    float n;
    float sum = 0;
    float avg;
    cout << "Enter the value of n: ";
    cin >> n;
    for (int i = 1; i <= n; i++) {
        sum += i;
    }
    avg = sum / n;
    cout << "The average of the first " << n << " natural numbers is " << avg;
    return 0;
}
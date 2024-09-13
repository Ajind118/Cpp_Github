// write a  program to sum the series :1/1+2^2/2+3^3/3+4^4/4+5^5/5+...+n^n/n
 
#include <iostream>
#include <cmath>
using namespace std;
 
int main() {
    int n;
    int sum = 0;
    cout << "Enter the value of n: ";
    cin >> n;
    for (int i = 1; i <= n; i++) {
        sum += pow(i, i) / i;
    }
    cout << "The sum of the series is " << sum;
    return 0;
}
// write a program to classify a given number as prime number or composite number .
 
#include <iostream>
using namespace std;
  
int main() {
    int n, i;
    bool isPrime = true;
  
    cout << "Enter a positive integer: ";
    cin >> n;
  
    if (n == 0 || n == 1) {
        isPrime = false;
    } else {
        for (i = 2; i <= n / 2; ++i) {
            if (n % i == 0) {
                isPrime = false;
                break;
            }
        }
    }
    if (isPrime)
        cout << n << " is a prime number";
    else
        cout << n << " is a composite number";
  
    return 0;
}
 

//  write  a program to print the following pattern:
// A 
// A B
// A B C
// A B C D
// A B C D E

#include <iostream>
using namespace std;
 
int main() {
    int i, j;
    char alphabet = 'A';
    int n;
    cout << "Enter the value of n: ";
    cin >> n;
    for (i = 1; i <= n; i++) {
        for (j = 1; j <= i; j++) {
            cout << alphabet << " ";
            alphabet++;
        }
        cout << endl;
        alphabet = 'A';
    }
    return 0;
}
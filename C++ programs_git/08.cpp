// write a program to convert character  into  lowercase, convert it into uppercase and vice versa

#include <iostream>
using namespace std;
   
int main() {
    char ch;
    cout << "Enter a character: ";
    cin >> ch;
    
    if(ch >= 'A' && ch <= 'Z') {
        cout << "Lowercase character: " << (char)(ch + 32);
    } else if(ch >= 'a' && ch <= 'z') {
        cout << "Uppercase character: " << (char)(ch - 32);
    } else {
        cout << "Invalid character";
    }
    
    return 0;
}

// Output: Enter a character: A
//         Lowercase character: a
//         Enter a character: a
//         Uppercase character: A
//         Enter a character: 5
//         Invalid character
 
  
 
  
 
     
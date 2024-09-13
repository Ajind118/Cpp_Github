// write a program that displays the size of every datatype

#include <iostream>
using namespace std;
 
int main() {
    cout << "Size of char: " << sizeof(char) << " byte" << endl;
    cout << "Size of int: " << sizeof(int) << " bytes" << endl;
    cout << "Size of float: " << sizeof(float) << " bytes" << endl;
    cout << "Size of double: " << sizeof(double) << " bytes" << endl;
    return 0;
}   
// Output:
// Size of char: 1 byte
// Size of int: 4 bytes
// Size of float: 4 bytes
// Size of double: 8 bytes
// In this program, we have used the sizeof operator to find the size of each data type. The sizeof operator returns the size of a variable or data type in bytes. We have used the sizeof operator with char, int, float, and double data types to find their sizes in bytes. Finally, we have printed the size of each data type using the cout statement.
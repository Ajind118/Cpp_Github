// write a program to add two values of different data types using static polymorphism.

#include <iostream>
using namespace std;
 int add(int a, int b)
 {
     return a+b;
 }
    float add(float a, float b)
    {
        return a+b;
    }
    double add(double a, double b)
    {
        return a+b;
    }
int main()
{
    cout<<add(2,3)<<endl;
    cout<<add(2.5,3.5)<<endl;
    cout<<add(2.5,3.5)<<endl;
    return 0;
}
// Output:
// 5
// 6
// 6
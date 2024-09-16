/ write a program to calculate exp(x,y) using recursive function

#include <iostream>
using namespace std;
int exp(int x, int y)
{
    if(y==0)
    {
        return 1;
    }
    else
    {
        return x*exp(x,y-1);
    }
}
 
int main()
{
    int x,y;
    cout<<"Enter two numbers: ";
    cin>>x>>y;
    cout<<"exp("<<x<<","<<y<<") is: "<<exp(x,y);
    return 0;
}
// Output:
// Enter two numbers: 2 3
// exp(2,3) is: 8
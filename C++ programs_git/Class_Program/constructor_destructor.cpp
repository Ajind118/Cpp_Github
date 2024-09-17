#include<iostream>
using namespace std;
int count=0;
class test
{
    public:
    test()
    {
        count ++;
        cout<<count<<",Object is Created"<<endl;
    }
    ~test()
    {
        cout<<count<<",No of Object Destroyed"<<endl;
        count--;
    }
};

int main()
{
    test t1,t2,t3,t4;
    {
        cout<<"Enter Block 1"<<endl;
         test t5;

    }
    {
    cout<<"Enter Block 2"<<endl;
    test a6;
    }
    cout<<"Enter In main"<<endl;
    return 0;
}
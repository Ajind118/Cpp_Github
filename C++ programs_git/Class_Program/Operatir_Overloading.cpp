#include<iostream>
using namespace std;
class test
{
    private:
    int x,y,z;
    public:
    void getdata(int a,int y,int z);
    void show();
    void operator -();

};
void test::getdata(int a,int b,int c)
{
    x=a;
    y=b;
    z=c;

}
void test::show()
{
    cout<<x<<","<<y<<","<<z;
}
void test::operator-()
{
    x=-x;
    y=-y;
    z=-z;
}
int main()
{
    test t1;
    t1.getdata(10,20,30);
    t1.show();
    cout<<"\nAfter Call\n";
    -t1;
    t1.show();
}
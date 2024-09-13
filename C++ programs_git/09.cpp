// write a program  of class and objects with member functions defined  and outside the class
 
#include <iostream>
using namespace std;
    
class student
{
    public:
    string name;
    int age;
    void display();
};
void student::display()
{
    cout << "Name: " << name << endl;
    cout << "Age: " << age << endl;
}
int main()
{
    student s1;
    s1.name = "John";
    s1.age = 25;
    s1.display();
    return 0;
}

// output
// Name: John
// Age: 25


     


  
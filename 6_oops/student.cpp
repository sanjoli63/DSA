#include <iostream>
using namespace std;
class student
{
    int age;

    public:

    //default constructor
    student()
    {
        cout<< "contructor called"<<endl;
    }

    //paremetrised constructor
     student(int r)
     {
        cout<<"constructor 2"<<endl;
        rollNumber = r;
        cout<<r<<endl;
     }
    int rollNumber;
    void display()
    {
        cout << age << " " << rollNumber << endl;
    }
    int getAge()
    {
        return age;
    }
    void setAge(int a)
    {
        if (a > 0)
        {
            return;
        }
        age = a;
    }
};

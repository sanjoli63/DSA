#include <iostream>
using namespace std;
class student
{
    int age;

    public:
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

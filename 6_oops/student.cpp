#include <iostream>
using namespace std;
class student
{
public:
    int rollNumber;

private:
    int age;

public:
    void display()
    {
        cout << age << " " << rollNumber << endl;
    }
    int getAge()
    {
        return age;
    }
    void setAge(int a){
        if(a>0)
        {
            return ;
        }
        age = a;
    }
};

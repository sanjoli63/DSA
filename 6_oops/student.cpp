#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class student
{
    public:
    int age;
    int rollNumber;
};

int main()
{
    ///creating objects statically
    student s1;
    student s2;
    student s3,s4,s5;
    ///creating objects statically
    student *s6 = new student;

    s1.age= 24;
    s1.rollNumber= 100;

    cout<< s1.age<<endl;
    cout<<s1.rollNumber<<endl;

    (*s6).age = 23;
    (*s6).rollNumber=30;

    s6->age=23;
    s6->rollNumber=30;
    cout<< s6->rollNumber<<endl;
    cout<<s6->age<<endl;
    return 0;
}

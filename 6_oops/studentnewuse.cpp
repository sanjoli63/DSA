#include <iostream>
#include  "student.cpp"
using namespace std;

int main()
{
    student s1;
    student *s2 = new student;
    s1.setAge(20);
    s2->setAge(30);
    s1.display();
    s2->display();
}
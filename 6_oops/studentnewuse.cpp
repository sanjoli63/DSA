#include <iostream>
#include  "student.cpp"
using namespace std;

int main()
{
    student s1;
    student s2;

    s1.display();
    s2.display();

    student *s3= new student;
    s3->display();
    student s4(102);
    student s5(30,100);
}
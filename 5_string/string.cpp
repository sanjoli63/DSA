#include<iostream>
using namespace std;

int main()
{
    string s ="abc";
    cout<<s<<endl;

    //dynamic string
    string *sp = new string;
    *sp ="mno";
    cout<<sp<<endl; //address
    cout<<*sp<<endl; //string
}
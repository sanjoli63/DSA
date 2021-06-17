#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    getline(cin,s);
    cout<< s<<endl;
    string s2= s.substr(2); //substring of s from index 2
    cout<< s2<< endl;
    int index = s2.find("a"); //find index of a in string s2
    cout << index << endl;

    int a = 1234;
     string b =to_string(a); //convert into into string
     cout<<b<<endl;

     // cast string to int
    int num=atoi("22");
    cout<<num;
    return 0;
}

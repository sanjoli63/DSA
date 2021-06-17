#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
    int i;
    string s ="abc";
    vector<string> v;
    v.push_back(s);
    v.push_back("hello");
    for(i=0;i <v.size();i++)
    {
        cout <<v[i]<<endl;
        sort(v[i].begin(),v[i].end());
        cout<<v[i]<<endl;
    }
}
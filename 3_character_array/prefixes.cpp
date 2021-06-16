#include<iostream>
using namespace std;

void printAllPrefixes(char a[])
{
    int i,j;
    for(i=0; a[i]!='\0';i++)
    {
        for(j=0;j<=i;j++)
        {
            cout<< a[j];
        }
        cout<<endl;
    }
}

int main()
{
    char name[100];
    cout<<"Enter name";
    cin.getline(name,100);
    printAllPrefixes(name);
}

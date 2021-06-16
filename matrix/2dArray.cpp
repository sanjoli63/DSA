#include<iostream>
using namespace std;

int main()
{
    int a[100][100];
    int m,n,i,j;
    cin>>m>>n;
    for(int i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            cin>>a[i][j];
        }
    }
}
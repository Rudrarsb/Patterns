#include<iostream>
using namespace std;

void p8(int n)
{
    int i,j,k;
    for(i=0;i<=n;i++)
    {
        for(j=0;j<i;j++)
        {
            cout<<" ";
        }
        for(k=0;k<(2*n)-(2*i-1);k++)
        {
            cout<<"*";
        }cout<<"\n";
    }
}
int main()
{
    int i,j,k,n;
    cin>>n;
    p8(n);
}
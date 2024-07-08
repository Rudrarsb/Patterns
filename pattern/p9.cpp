#include<iostream>
using namespace std;

void p9(int n)
{
    int i,j,k;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n-i;j++)
        {
            cout<<" ";
        }
        for(k=1;k<=(2*i)-1;k++)
        {
            cout<<"*";
        }cout<<"\n";
    }
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i-1;j++)
        {
            cout<<" ";
        }
        for(k=1;k<=(2*n)-(2*i-1);k++)
        {
            cout<<"*";
        }cout<<"\n";
    }
}
int main(){
    int i,j,k,n;
    cin>>n;
    p9(n);
}
#include<iostream>
using namespace std;

void p7(int n)
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
}
int main(){
    int i,j,k,n;
    cin>>n;
    p7(n);
}
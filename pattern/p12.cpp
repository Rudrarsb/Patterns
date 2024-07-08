#include<iostream>
using namespace std;

void p12(int n)
{
    int i,j,k,l;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
            cout<<j;
            
        } 
       
        for(k=1;k<=2*(n-i);k++)
        {
            cout<<"*";
        }
        for(l=i;l>=1;l--)
        {
            cout<<l;
        }
        cout<<endl;
    
    }
}
int main(){
    int i,j,k,l,n;
    cin>>n;
    p12(n);
}
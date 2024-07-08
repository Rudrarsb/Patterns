#include<iostream>
using namespace std;

void p17(int n)
{
    char i,j,k,l;
    for(i='A';i<=char('A'+n);i++)
    {
        for(j=char('A'+n);j>i;j--)
            cout<<" "<<" ";
        for(k='A';k<i;k++)
            cout<<k<<" ";
        for(l=i;l>='A';l--)
            cout<<l<<" ";
        
        cout<<endl;
    }
}
int main(){
    char i,j,k,l;
    int n;
    cin>>n;
    p17(n);
}
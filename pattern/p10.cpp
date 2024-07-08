#include<iostream>
using namespace std;

void p10(int n){
    int i,j;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
            cout<<"*";
        }cout<<endl;
    }
    for(i=4;i>=1;i--)
    {
        for(j=1;j<=i;j++)
        {
            cout<<"*";
        }cout<<endl;
    }

}

int main(){
    int i,j;
    int n;
    cin>>n;
    p10(n);
}
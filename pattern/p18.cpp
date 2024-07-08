#include<iostream>
using namespace std;

void p15(int n){
    int i,j;
    for(i=n;i>=1;i--)
    {
        for(j=i;j<=5;j++)
        {
            cout<<(char)(65+j-1) <<" ";
        }
        cout<<endl;
    }
}
int main(){
    int i,n;
    int j;
    cin>> n;
    p15(n);
     
}
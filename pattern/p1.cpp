#include<iostream>
using namespace std;

void p1(int n){
    int i,j;
    for(i=0;i<=n;i++){
        for(j=0;j<=n;j++){
            cout<<"*";
        }
        cout<<endl;
    }
}
int main(){
    int i,j,n;
    cin>> n;
    p1(n);
     
}
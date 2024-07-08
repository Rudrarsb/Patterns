#include<iostream>
using namespace std;

void p13(int n){
    int i,j,m=1;
    for(i=1;i<=n;i++){
        for(j=1 ;j<=i;j++){
           
            cout<<m;
             m++;
        }
        cout<<endl;
    }
}
int main(){
    int i,j,n;
    cin>> n;
    p13(n);
     
}
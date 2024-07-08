#include<iostream>
using namespace std;

void p3(int n){
    int i,j;
    for(i=0;i<=n;i++){
        for(j=0;j<=i;j++){
            cout<<j;
        }
        cout<<endl;
    }
}
int main(){
    int i,j,n;
    cin>> n;
    p3(n);
     
}
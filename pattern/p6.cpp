#include<iostream>
using namespace std;

void p6(int n){
    int i,j;
    for(i=n;i>=1;i--){
        for(j=1;j<=i;j++){
            cout<<j<< " ";
         } cout<<endl;
    }
}
int main(){
    int i,j,n;
    cin>> n;
    p6(n);
    return 0;
}
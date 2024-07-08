#include<iostream>
using namespace std;

void p5(int n){
    int i,j;
    for(i=n;i>=1;i--){
        for(j=1;j<=i;j++){
            cout<< "*"<< " ";
         } cout<<endl;
    }
}
int main(){
    int i,j,n;
    cin>> n;
    p5(n);
    return 0;
}
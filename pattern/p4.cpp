#include<iostream>
using namespace std;

void p4(int n){
    int i,j,c=1;
    for(i=0;i<=n;i++){
        for(j=0;j<=i;j++){
            cout<<c;
        }c++;
        cout<<endl;
    }
}
int main(){
    int i,j,n;
    cin>> n;
    p4(n);
     
}
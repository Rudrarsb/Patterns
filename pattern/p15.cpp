#include<iostream>
using namespace std;

void p15(int n){
    int i;
    char j;
    for(i=n;i>=0;i--){
        for(j='A' ;j<='A'+i-1;j++){
           
            cout<<j<<" ";
            
        }
        cout<<endl;
    }
}
int main(){
    int i,n;
    char j;
    cin>> n;
    p15(n);
     
}
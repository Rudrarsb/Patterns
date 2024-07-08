#include<iostream>
using namespace std;

void p14(int n){
    int i,j;
    for(i=1;i<=n;i++){
        for(j=0 ;j<i;j++)
        {
           
            cout<<(char)(65+j)<<" ";
            
        }
        cout<<endl;
    }
}
int main(){
    int i,n;
    char j;
    cin>> n;
    p14(n);
     
}
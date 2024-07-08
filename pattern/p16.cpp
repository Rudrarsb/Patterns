#include<iostream>
using namespace std;

void p16(int n){
    int i,j;
    char ch='A';
    for(i=1;i<=n;i++){
        for(j=1;j<=i;j++){
           cout<<ch<<" ";
        } ch++;
        cout<<endl;
    }
}
int main(){
    int i,j,n;
    cin>>n;
    p16(n);
}
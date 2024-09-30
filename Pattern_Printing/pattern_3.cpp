/*
    a b c d e 
    a b c d e
    a b c d e
    a b c d e 

*/
#include<iostream>
using namespace std;

int main(){
    int n,i,j;
    cout<<"Enter number of rows : ";
    cin>>n;

    for(i=1;i<=n;i++){
        for(j=97;j<=101;j++){
            cout<<char(j)<<" ";
        }
        cout<<endl;
    }
}
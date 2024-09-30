/*
    a 
    b b 
    c c c
    d d d d 
    e e e e e     
*/

#include<iostream>
using namespace std;
int main(){
    int n,i,j;
    cout<<"Enter number of rows : ";
    cin>>n;

    for(i=1;i<=n;i++){
        char temp = 'a' + i - 1;
        for(j=1;j<=i;j++){
            cout<<temp<<" ";
        }
        cout<<endl;
    }
}

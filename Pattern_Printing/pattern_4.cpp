/*
    1 2 3 4 5 
    6 7 8 9 10
    11 12 13 14 15

*/
#include<iostream>
using namespace std;

int main(){
    int n,i,j;
    cout<<"Enter number of rows : ";
    cin>>n;

    int temp = 1;

    for(i=1;i<=n;i++){
        for(j=1;j<=5;j++){
            cout<<temp<<" ";
            temp++;
        }
        cout<<endl;
    }
}
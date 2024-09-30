/* 5 4 3 2 1
   5 4 3 2 1
   5 4 3 2 1
   5 4 3 2 1
   5 4 3 2 1
*/
#include<iostream>
using namespace std;

int main(){
    int n,i,j;
    cout<<"Enter number of rows : ";
    cin>>n;

    for(i=1;i<=n;i++){
        for(j=5;j>=1;j--){
            cout<<j<<" ";
        }
        cout<<endl;
    }
}

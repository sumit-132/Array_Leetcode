/*
* * * * * * * * * 
  * * * * * * * 
    * * * * * 
      * * * 
        * 
*/
#include<iostream>
using namespace std;

int main(){
    int n,i,j;
    cout<<"Enter number of rows : ";
    cin>>n;

    for(i=1;i<=n;i++){

        for(j=1;j<=i-1;j++){
            cout<<"  ";
        }

        for(j=n*2-1;j>=2*i-1;j--){
            cout<<"* ";
        }

       
        cout<<endl;
    }
}
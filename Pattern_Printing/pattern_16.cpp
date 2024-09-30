/*

    * 
   * * 
  * * * 
 * * * * 
* * * * * 
* * * * * 
 * * * * 
  * * * 
   * * 
    * 

*/
#include<iostream>
using namespace std;

int main(){
    int n,i,j;
    cout<<"Enter number of rows : ";
    cin>>n;
    //upper half
    for(i=1;i<=n;i++){

        for(j=n-1;j>=i;j--){
            cout<<" ";
        }

        for(j=1;j<=i;j++){
            cout<<"* ";
        }

        cout<<endl;
    }  

    //lower half
    for(i=1;i<=n;i++){

        for(j=1;j<=i-1;j++){
            cout<<" ";
        }

        for(j=n;j>=i;j--){
            cout<<"* ";
        }
        cout<<endl;
    } 
}    
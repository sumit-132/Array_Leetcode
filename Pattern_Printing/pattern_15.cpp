/*

*             * 
* *         * * 
* * *     * * * 
* * * * * * * * 
* * *     * * * 
* *         * * 
*             * 

*/

#include<iostream>
using namespace std;

int main(){
    int n,i,j;
    cout<<"Enter number of rows : ";
    cin>>n;
    //upper half
    for(i=n;i>=1;i--){

        for(j=n;j>=i;j--){
            cout<<"* ";
        }

        for(j=1;j<=2*i-2;j++){
            cout<<"  ";
        }

        for(j=n;j>=i;j--){
            cout<<"* ";
        }
        cout<<endl;
    }

    //lower half
    for(i=1;i<=n-1;i++){

        for(j=n-1;j>=i;j--){
            cout<<"* ";
        }

        for(j=1;j<=2*i;j++){
            cout<<"  ";
        }

        for(j=n-1;j>=i;j--){
            cout<<"* ";
        }
        cout<<endl;
    }
} 
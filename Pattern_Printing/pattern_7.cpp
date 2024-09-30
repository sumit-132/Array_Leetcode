/*
            *
          * *
        * * *
      * * * *
    * * * * *   
*/

#include<iostream>
using namespace std;

int main(){
    int n = 5;

    int i,j;

    for(i=1;i<=n;i++){

        //printing space
        for(j=1;j<=5-i;j++){
            cout<<"  ";
        }

        //printing star
        for(j=1;j<=i;j++){
            cout<<"* ";
        }
        cout<<endl;
    }
}

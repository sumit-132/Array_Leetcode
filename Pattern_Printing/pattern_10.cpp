/*
            1
          2 1
        3 2 1
      4 3 2 1
    5 4 3 2 1
*/

#include<iostream>
using namespace std;

int main(){
    int n = 5;

    int i,j;
    

    for(i=1;i<=5;i++){

        for(j=1;j<=5-i;j++){
            cout<<"  ";
        }
        for(j=i;j>=1;j--){
            cout<<j<<" ";
        }
        cout<<endl;
    }
    
}

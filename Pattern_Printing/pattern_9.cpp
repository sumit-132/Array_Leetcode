/*
            A
          A B
        A B C
      A B C D
    A B C D E
*/
#include<iostream>
using namespace std;

int main(){
    int n = 5;

    int i,j;
    char k;

    for(i=1;i<=5;i++){

        for(j=1;j<=5-i;j++){
            cout<<"  ";
        }

        for(k='A';k<='A'+i-1;k++){
            cout<<k<<" ";
        }
        cout<<endl;
    }
    
}

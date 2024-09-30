#include<iostream>
using namespace std;

int fib(int n){
    if(n<=1){
    return n;
    }
    else{
    return fib(n-1)+fib(n-2)+1;
    }
}

int main(){
   int n,r;

   cout<<"Enter a number  =  ";
   cin>>n;

    r=fib(n);
   cout<<"Sum : "<<r;
   

    return 0;
    
}
#include<iostream>
#include<cmath>
using namespace std;

int countDigit(int n){
    int count = 0;
    while(n>0){
        n /= 10;
        count++;
    }
    return count;

}

void arm(int n,int digit){
    int ld,res,s,temp;
    temp = n;
    s = 0;
    while(n>0){
        ld = n % 10;
        s += pow(float(ld),float(digit));
        n /= 10;
    }
    if(temp == s)
    cout<<"Armstrong number";
    else
    cout<<"Not an Armstrong number";
}

int main(){
    int n;
    cout<<"Enter a number : ";
    cin>>n;
    int digit = countDigit(n);

    arm(n,digit);
    return 0;
}
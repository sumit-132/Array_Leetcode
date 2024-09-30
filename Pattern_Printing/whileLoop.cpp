#include<iostream>
using namespace std;

int main(){
    cout<<"1. Addition\n2. Substraction\n3. Multiplication\n4. Division\n";
    int choice,a,b;
    cout<<"Enter your choice : ";
    cin>>choice;

    cout<<"Enter first and second number : ";
    cin>>a>>b;

    switch(choice){
        case 1:
        cout<<"Sum : "<<a+b;
        break;

        case 2:
        cout<<"Difference : "<<a-b;
        break;

        case 3:
        cout<<"Product : "<<a*b;
        break;

        case 4:
        cout<<"Quotient : "<<a/b;
        break;

        default:
        cout<<"Invalid Choice\n";
        break;
    }

}

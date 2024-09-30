#include<iostream>
using namespace std;

int main(){
    int marks;
    char grade;

    cout<<"Enter marks : ";
    cin>>marks;

    if(marks > 90){
        grade = 'O';
    }
    else if(marks > 80){
        grade = 'E';
    }
    else if(marks > 70){
        grade = 'A';
    }
    else{
        grade = 'F';
    }

    cout<<"Grade : "<<grade;

    
}
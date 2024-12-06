#include<iostream>
// #include<algorithm>
using namespace std;

int main(){
    int arr[6];
    int i,a = 0,b = 5;
    printf("Enter the elements of array : ");
    for(i=0;i<6;i++){
        cin>>arr[i];
    }

    while(a<b){
        swap(arr[a],arr[b]);
        a++;
        b--;
    }

    for(i=0;i<6;i++){
        cout<<arr[i]<<" ";
    }
    

    return 0;
}
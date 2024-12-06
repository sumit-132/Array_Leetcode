#include<iostream>
using namespace std;

int main(){
    int arr[100];
    int n,i,j;

    cout<<"Enter the size of array : ";
    cin>>n;

    cout<<"Enter the elements of array : ";
    for(i=0;i<n;i++){
        cin>>arr[i];
    }

    for(int i=n-2;i>=0;i--){
        for(int j=i;j<n;j++){
            if(arr[j] > arr[j+1])
            swap(arr[j],arr[j+1]);
            else
            break;
        }
    }

    for(i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}
#include<iostream>
using namespace std;

int main(){
    int arr[100];
    int n,i,j;

    cout<<"Enter the size of the array : ";
    cin>>n;

    cout<<"Enter the elements of array : ";
    for(i=0;i<n;i++){
        cin>>arr[i];
    }

    for(i=0;i<n-1;i++){
        int index = i;

        for(j=i+1;j<n;j++){
            if(arr[j] < arr[index])
            index = j;
        }

        swap(arr[i],arr[index]);
    }

    for(i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}
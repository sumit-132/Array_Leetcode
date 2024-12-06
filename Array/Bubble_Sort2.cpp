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

    for(int i=1;i<n;i++){
        bool swapped = 0;

        for(j=n-1;j>=i;j--){
            if(arr[j] < arr[j-1]){
                swapped = 1;
                swap(arr[j],arr[j-1]);
            }
        }

        if(swapped == 0)
        break;
    }

    for(i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}
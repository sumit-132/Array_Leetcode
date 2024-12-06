#include <iostream>
#include <climits> // For INT_MIN and INT_MAX
using namespace std;

int main(){
    int arr[5] = {1, 2, 3, 4, 5};
    cout << "Size : " << sizeof(arr)/sizeof(arr[0]) << endl;

    int i, j, min, max;
    min = INT_MAX;

    for(i = 0; i < 5; i++){
        if(arr[i] < min)
            min = arr[i];
    }

    cout << "Min: " << min << endl;

    max = INT_MIN;
    for(j = 0; j < 5; j++){
        if(arr[j] > max)
            max = arr[j];
    }

    cout << "Max: " << max << endl;

    return 0;
}

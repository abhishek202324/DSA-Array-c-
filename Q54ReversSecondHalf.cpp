#include<iostream>
using namespace std;

void inputArray(int arr[], int size) {
    cout << "Enter array elements: ";
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }
}

void Original(int arr[], int size) {
    cout << "Original array is: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void ReverseSecondHalf(int arr[], int size) {
    int sz=int(size/2);
  
    for(int i=sz, j=size-1;i<size,i<j;i++,j--){
        swap(arr[i],arr[j]);
    }
    cout<<"Array after revers second half :";
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    
}

int main() {
    int arr[9];
    inputArray(arr, 9);
    Original(arr, 9);
    ReverseSecondHalf(arr, 9);
    return 0;
}

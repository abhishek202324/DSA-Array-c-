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

void PeakElement(int arr[], int size) {
    for(int i=0;i<size;i++){
        if(i==0 && arr[i]>arr[i+1]){
            cout<<arr[i]<<" ";
        }
        else if(i==size-1&& arr[i]>arr[i-1]){
            cout<<arr[i]<<" ";
        }
        else if(i>0&&i<size-1&& arr[i]>arr[i-1]&& arr[i]>arr[i+1]){
            cout<<arr[i]<<" ";

        }
    }
    cout<<endl;
    
}

int main() {
    int arr[10];
    inputArray(arr, 10);
    Original(arr, 10);
    cout<<"Peak Elements are follows ";
    PeakElement(arr, 10);
    return 0;
}

#include<iostream>

using namespace std;

void inputArray(int arr[], int size) {
    cout << "Enter array elements: ";
    for(int i = 0; i < size; i++) {
        cin >> arr[i];
    }
}

bool IsSortted(int arr[], int size) {
    
    for(int i = 0; i < size-1; i++) {
        if(arr[i] > arr[i+1]) {
           return false;
        }
    }
    return true;
}

int main() {
    int arr[8];
    inputArray(arr, 8);
    bool issort = IsSortted(arr, 8);
    if(issort==true){
        cout<<"The give array is sorted ";
    }
    else{
        cout<<"The give array is no sorted ";
    }
    return 0;
}

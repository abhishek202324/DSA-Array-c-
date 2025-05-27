#include<iostream>
using namespace std;

void inputArray(int arr[], int size) {
    cout << "Enter array elements: ";
    for(int i = 0; i < size; i++) {
        cin >> arr[i];
    }
}

void Original(int arr[], int size) {
    cout << "Original array is: ";
    for(int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void ReplaceOdd(int arr[], int size) {
    for(int i = 0; i < size; i++) {
        if(arr[i] % 2 != 0) {
            arr[i] = 1;
        }
    }

    cout << "Array after replacing all odd elements with 1: ";
    for(int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int arr[8];
    inputArray(arr, 8);
    Original(arr, 8);
    ReplaceOdd(arr, 8);

    return 0;
}

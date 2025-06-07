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

void HalfElements(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        arr[i] = arr[i] / 2;  // Integer division
    }

    cout << "Array after halving each element: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int arr[10];
    inputArray(arr, 10);
    Original(arr, 10);
    HalfElements(arr, 10);
    return 0;
}

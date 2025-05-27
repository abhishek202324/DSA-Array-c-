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

void ReplaceElement(int arr[], int size, int oldVal, int newVal) {
    for(int i = 0; i < size; i++) {
        if(arr[i] == oldVal) {
            arr[i] = newVal;
        }
    }

    cout << "Array after replacing " << oldVal << " with " << newVal << ": ";
    for(int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int arr[8];
    int oldValue, newValue;

    inputArray(arr, 8);
    Original(arr, 8);

    cout << "Enter the element you want to replace: ";
    cin >> oldValue;
    cout << "Enter the new value: ";
    cin >> newValue;

    ReplaceElement(arr, 8, oldValue, newValue);

    return 0;
}

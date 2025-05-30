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

void GreaterThanValue(int arr[], int size, int value) {
    cout << "Elements greater than " << value << " are: ";
    for(int i = 0; i < size; i++) {
        if(arr[i] > value) {
            cout << arr[i] << " ";
        }
    }
    cout << endl;
}

int main() {
    int arr[10], value;
    inputArray(arr, 10);
    Original(arr, 10);
    cout << "Enter value to check greater than: ";
    cin >> value;
    GreaterThanValue(arr, 10, value);
    return 0;
}

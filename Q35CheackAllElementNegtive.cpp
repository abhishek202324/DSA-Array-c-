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

void CheckAllNegative(int arr[], int size) {
    bool allNegative = true;
    for(int i = 0; i < size; i++) {
        if(arr[i] >= 0) {
            allNegative = false;
            break;
        }
    }
    if(allNegative)
        cout << "All elements are negative." << endl;
    else
        cout << "Not all elements are negative." << endl;
}

int main() {
    int arr[10];
    inputArray(arr, 10);
    Original(arr, 10);
    CheckAllNegative(arr, 10);
    return 0;
}

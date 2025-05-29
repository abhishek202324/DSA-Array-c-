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

void CheckOnlyEven(int arr[], int size) {
    bool allEven = true;
    for(int i = 0; i < size; i++) {
        if(arr[i] % 2 != 0) {
            allEven = false;
            break;
        }
    }
    if(allEven)
        cout << "Array contains only even numbers." << endl;
    else
        cout << "Array contains odd numbers too." << endl;
}

int main() {
    int arr[10];
    inputArray(arr, 10);
    Original(arr, 10);
    CheckOnlyEven(arr, 10);
    return 0;
}

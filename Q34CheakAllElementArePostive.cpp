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

void CheckAllPositive(int arr[], int size) {
    bool allPositive = true;
    for(int i = 0; i < size; i++) {
        if(arr[i] <= 0) {
            allPositive = false;
            break;
        }
    }
    if(allPositive)
        cout << "All elements are positive." << endl;
    else
        cout << "Not all elements are positive." << endl;
}

int main() {
    int arr[10];
    inputArray(arr, 10);
    Original(arr, 10);
    CheckAllPositive(arr, 10);
    return 0;
}

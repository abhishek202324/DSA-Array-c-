#include<iostream>
#include<climits>
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

void MinOddPos(int arr[], int size) {
    int minVal = INT_MAX;
    for(int i = 1; i < size; i += 2) {
        if(arr[i] < minVal)
            minVal = arr[i];
    }
    cout << "Minimum element at odd positions: " << minVal << endl;
}

int main() {
    int arr[10];
    inputArray(arr, 10);
    Original(arr, 10);
    MinOddPos(arr, 10);
    return 0;
}

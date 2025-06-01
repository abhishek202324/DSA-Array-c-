#include<iostream>
#include<algorithm>
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

void FindLargestThree(int arr[], int size) {
    sort(arr, arr + size);  
    cout << "Largest three elements are: ";
    cout << arr[size - 1] << " " << arr[size - 2] << " " << arr[size - 3] << endl;
}

int main() {
    int arr[10], size = 10;
    inputArray(arr, size);
    Original(arr, size);
    FindLargestThree(arr, size);
    return 0;
}

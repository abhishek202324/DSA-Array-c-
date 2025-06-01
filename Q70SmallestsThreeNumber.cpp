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

void FindSmallestThree(int arr[], int size) {
    sort(arr, arr + size);
    cout << "Smallest three elements are: ";
    cout << arr[0] << " " << arr[1] << " " << arr[2] << endl;
}

int main() {
    int arr[10], size = 10;
    inputArray(arr, size);
    Original(arr, size);
    FindSmallestThree(arr, size);
    return 0;
}

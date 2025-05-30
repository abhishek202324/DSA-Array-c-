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

void CubeArray(int arr[], int size) {
    int cubeArr[10];
    for(int i = 0; i < size; i++) {
        cubeArr[i] = arr[i] * arr[i] * arr[i];
    }
    cout << "Array of cubes: ";
    for(int i = 0; i < size; i++) {
        cout << cubeArr[i] << " ";
    }
    cout << endl;
}

int main() {
    int arr[10];
    inputArray(arr, 10);
    Original(arr, 10);
    CubeArray(arr, 10);
    return 0;
}

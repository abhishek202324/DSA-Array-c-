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

void SumOfEven(int arr[], int size) {
    int sum = 0;
    for(int i = 0; i < size; i++) {
        if(arr[i] % 2 == 0) {
            sum += arr[i];
        }
    }
    cout << "Sum of even elements: " << sum << endl;
}

int main() {
    int arr[10];
    inputArray(arr, 10);
    Original(arr, 10);
    SumOfEven(arr, 10);
    return 0;
}

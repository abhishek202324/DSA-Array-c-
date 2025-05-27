#include<iostream>
using namespace std;

void inputArray(int arr[], int size) {
    cout << "Enter array elements: ";
    for(int i = 0; i < size; i++) {
        cin >> arr[i];
    }
}

void printOriginal(int arr[], int size) {
    cout << "Original array is: ";
    for(int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int countNegative(int arr[], int size) {
    int count = 0;
    for(int i = 0; i < size; i++) {
        if(arr[i] < 0) {
            count++;
        }
    }
    return count;
}

int main() {
    int arr[12];

    inputArray(arr, 12);
    printOriginal(arr, 12);

    int result = countNegative(arr, 12);
    cout << "The total number of negative numbers is: " << result << endl;

    return 0;
}

#include<iostream>
using namespace std;

void inputArray(int arr[], int size) {
    cout << "Enter array elements: ";
    for(int i = 0; i < size; i++) {
        cin >> arr[i];
    }
}

int getSum(int arr[], int size) {
    int sum = 0;
    for(int i = 0; i < size; i++) {
        sum += arr[i];
    }
    return sum;
}

int main() {
    int arr[8];
    inputArray(arr, 8);
    int total = getSum(arr, 8);
    float average = static_cast<float>(total) / 8;
    cout << "The average of all elements is " << average;
    return 0;
}

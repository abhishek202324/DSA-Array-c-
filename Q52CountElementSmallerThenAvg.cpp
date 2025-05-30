#include<iostream>
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

void CountGreaterThanAverage(int arr[], int size) {
    float sum = 0;
    for (int i = 0; i < size; i++) {
        sum += arr[i];
    }
    float average = sum / size;

    int count = 0;
    for (int i = 0; i < size; i++) {
        if (arr[i] > average) {
            count++;
        }
    }

    cout << "Average of array elements is: " << average << endl;
    cout << "Count of elements greater than average: " << count << endl;
}

int main() {
    int arr[10];
    inputArray(arr, 10);
    Original(arr, 10);
    CountGreaterThanAverage(arr, 10);
    return 0;
}

#include<iostream>
#include<climits> // For INT_MAX
using namespace std;

void inputArray(int arr[], int size) {
    cout << "Enter array elements: ";
    for(int i = 0; i < size; i++) {
        cin >> arr[i];
    }
}

int findSecondMinimum(int arr[], int size) {
    int min = INT_MAX;
    int secondMin = INT_MAX;

    for(int i = 0; i < size; i++) {
        if(arr[i] < min) {
            min = arr[i];
        }
    }

    for(int i = 0; i < size; i++) {
        if(arr[i] < secondMin && arr[i] > min) {
            secondMin = arr[i];
        }
    }

    return secondMin;
}

int main() {
    int arr[8];
    inputArray(arr, 8);
    int secondMin = findSecondMinimum(arr, 8);
    cout << "The second smallest element is " << secondMin;
    return 0;
}

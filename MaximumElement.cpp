#include<iostream>
#include<climits> // For INT_MAX
using namespace std;

void inputArray(int arr[], int size) {
    cout << "Enter array elements: ";
    for(int i = 0; i < size; i++) {
        cin >> arr[i];
    }
}

int findMaximum(int arr[], int size) {
    int max= INT_MIN;
    for(int i = 0; i < size; i++) {
        if(arr[i] > max) {
            max = arr[i];
        }
    }
    return max;
}

int main() {
    int arr[8];
    inputArray(arr, 8);
    int MAxElement = findMaximum(arr, 8);
    cout << "The minimum element is " << MAxElement;
    return 0;
}

#include<iostream>
#include<climits> // For INT_MAX
using namespace std;

void inputArray(int arr[], int size) {
    cout << "Enter array elements: ";
    for(int i = 0; i < size; i++) {
        cin >> arr[i];
    }
}

int findSecondMaximum(int arr[], int size) {
    int max= INT_MIN;
    int secondMax=INT_MIN;
    for(int i = 0; i < size; i++) {
        if(arr[i] > max) {
            max = arr[i];
        }
    }
    for(int i = 0; i < size; i++) {
        if(arr[i] > secondMax && arr[i]<max) {
            secondMax = arr[i];
        }
    }
    return secondMax;
    
    
}

int main() {
    int arr[8];
    inputArray(arr, 8);
    int SecondMax = findSecondMaximum(arr, 8);
    cout << "The Second max  element is " << SecondMax;
    return 0;
}

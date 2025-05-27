#include<iostream>
#include<climits> 
using namespace std;

void inputArray(int arr[], int size) {
    cout << "Enter array elements: ";
    for(int i = 0; i < size; i++) {
        cin >> arr[i];
    }
}
void Original(int arr[], int size) {
    cout<<"Original  array is : ";
    for(int i =0; i<size; i++) {
        cout<<arr[i]<<" ";
}
cout<<endl;
    
}

void SwapFirstAndLastElement(int arr[], int size) {
    int temp=arr[0];
    for(int i=1;i<size;i++){
        arr[i-1]=arr[i];
    }
    arr[size-1]=temp;
    
    cout<<"Array after Swaping first and last element : ";
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
    

int main() {
    int arr[10];    
    inputArray(arr, 10);
    Original(arr,10);
    SwapFirstAndLastElement(arr, 10);
    return 0;
}

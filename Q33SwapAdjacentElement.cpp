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

void SwapAdjecentpair(int arr[], int size) {
    if(size%2==0){
    for(int i=0;i<size;i=i+2){
        swap(arr[i],arr[i+1]);
    }
}
else{
    for(int i=0;i<size-1;i=i+2){
        swap(arr[i],arr[i+1]);
    }
}
    
    cout<<"Array after Swaping first and last element : ";
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
    

int main() {
    int arr[9];    
    inputArray(arr, 9);
    Original(arr,9);
    SwapAdjecentpair(arr, 9);
    return 0;
}

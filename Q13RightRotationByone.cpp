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

void RightRot(int arr[], int size) {
    int temp=arr[size-1];
    for(int i=size-1;i>=1;i--){
        arr[i]=arr[i-1];
    }
    arr[0]=temp;

    cout<<"Array after  right one roation :";
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
     cout<<endl;
}
    

int main() {
    int arr[8];
    inputArray(arr, 8);
    Original(arr,8);
    RightRot(arr, 8);
  
    return 0;
}

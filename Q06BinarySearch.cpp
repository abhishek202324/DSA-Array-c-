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

int  BinarySearch(int arr[], int size,int target) {
    int high=size-1,low=0;
    while(low<=high){
        int mid=(low+high)/2;
        if(arr[mid]==target)return mid;
        else if(target>arr[mid]){
            low=mid+1;
        }
        else{
            high=mid-1;
        }
    }
    return -1;
   
    
}

int main() {
    int arr[10];
    inputArray(arr, 10);
    Original(arr,10);
    int target;
    cout<<"Enter target you want to search ";
    cin>>target;
    int result=BinarySearch(arr, 10,target);
    if(result==-1){
        cout<<"The searched is not found ";
    }
    else{
        cout<<"The element found at this index"<<result<<" ";
    }
  
    return 0;
}

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

void InsertInGivenPos(int arr[], int size,int element,int postion) {
    if(postion<0||postion>size){
        cout<<"Invalid postion you entered ";
        return ;
    }
    for(int i=size;i>postion;i--){
        arr[i]=arr[i-1];
    }
    arr[postion]=element;
    size++;
    cout<<"Array after insert at the certain postion :";
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl<<"The size of array is now "<<size;
}
    

int main() {
    int arr[10];
    int element,postion;
    
    inputArray(arr, 10);
    Original(arr,10);
    cout<<"Enter the element you want to push ";
    cin>>element;
    cout<<"Enter the postion that you want to push ";
    cin>>postion;
    InsertInGivenPos(arr, 10,element,postion);
  
    return 0;
}

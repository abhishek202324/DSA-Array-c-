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

void DeleteElementOfGivenPos(int arr[], int size,int postion) {
    if(postion<0||postion>size){
        cout<<"You Entered wrong postion run code again ";
        return;
    }
    for(int i=postion;i<size;i++){
        arr[i]=arr[i+1];
    }
    size--;
    cout<<"Array after delete particluar element: ";
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
    

int main() {
    int arr[10];
    int element,postion;
    
    inputArray(arr, 10);
    Original(arr,10);
    
    cout<<"Enter the postion of element you want to delete element  ";
    cin>>postion;
   DeleteElementOfGivenPos(arr, 10,postion);
   
    
  
    return 0;
}

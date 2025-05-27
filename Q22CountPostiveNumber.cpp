#include<iostream>

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

int CountPostive(int arr[], int size) {
    int count=0;
    for(int i=0;i<size;i++){
        if(arr[i]>0){
            count+=1;

        }
        
    }
    return count;

    
    
}
    

int main() {
    int arr[12];

    inputArray(arr, 12);
    Original(arr,12);
    
    int result=CountPostive(arr, 12);
    
        
    
    cout<<"The total number of postive number are : "<<result<<endl;
   

  
    return 0;
}

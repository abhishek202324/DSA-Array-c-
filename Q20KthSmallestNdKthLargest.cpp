#include<iostream>
#include<climits> 
using namespace std;
void kthSmallAndKthLargest(vector<int>&arr,int k) {
    
    sort(arr.begin(),arr.end());
    cout<<"The Kth largest element is "<<arr[k+1]<<endl;
    cout<<"The Kth smallest  element is "<<arr[k-1]<<endl;
    

    
}
    

int main() {
    
    vector<int> arr = {12, 3, 5, 7, 19,4,6,9,22};
   
    kthSmallAndKthLargest(arr,2);
  
    return 0;
}

#include <iostream>
#include <vector>
using namespace std;

void OriginalArray(vector<int>& arr) {
    cout << "Original array is: ";
    for (int x : arr) {
        cout << x << " ";
    }
    cout << endl;
}

void NextGreaterElement(vector<int>& arr) {
    vector<int> result;
    int n = arr.size();

    for (int i = 0; i < n; i++) {
        bool found = false;
        for (int j = i + 1; j < n; j++) {
            if (arr[j] > arr[i]) {
                result.push_back(arr[j]);
                found = true;
                break;
            }
        }
        if (found==false) {
            result.push_back(-1);
        }
    }

   
    cout << "Next Greater Elements: ";
    for (int x : result) {
        cout << x << " ";
    }
    cout << endl;
}

int main() {
    vector<int> arr = {4, 5, 2, 10, 8};
    OriginalArray(arr);
    NextGreaterElement(arr);
    return 0;
}

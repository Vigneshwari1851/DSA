// 1. Sort an array using selection sort

// Input: [64, 25, 12, 22, 11]
// Output: [11, 12, 22, 25, 64]

#include <iostream>
using namespace std;
int main() {
    // Write C++ code here
    int arr[] = {64, 25, 12, 22, 11};
    // int n = size(arr);
    int n = sizeof(arr) / sizeof(arr[0]);
    for(int i = 0; i<n-1;i++){
        int mini = i;
        for(int j = i+1;j<n;j++){
            if(arr[j]<arr[mini]){
                mini =j;
            }
        }
        if (mini != i)
        {
            swap(arr[i],arr[mini]);
        }
    }
    for(int i =0;i<n;i++){
        cout<<arr[i];
        cout<< " ";
    }
    return 0;
}
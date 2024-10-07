// 1. Sort an array using selection sort

// Input: [64, 25, 12, 22, 11]
// Output: [11, 12, 22, 25, 64]

// Use Selection Sort when minimizing swaps is important or when you 're working with small datasets that don' t benefit from early termination.
// Time complexity: O(N2), (where N = size of the array), for the worst, the best and average cases.
// space complexity: O(1)


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
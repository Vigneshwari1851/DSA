// 4. Sort only even-indexed elements

// Input: [64, 25, 12, 22, 11, 30]
// Final Output Array: [11, 25, 12, 22, 64, 30]
// (Only elements at index 0, 2, and 4 are sorted: [12, 22, 64])

#include <iostream>
using namespace std;
int main() {
    // Write C++ code here
    int k = 3;
    int arr[] = {64, 25, 12, 22, 11,30};
    int n = sizeof(arr) / sizeof(arr[0]);
    for(int i = 0; i<n;i+=2){
            int mini = i;
            for(int j = i+2;j<n;j+=2){
                if(arr[j]<arr[mini]){
                    mini =j;
                }
            }
            if(mini!=i){
            swap(arr[i],arr[mini]);
        }
    }
    for(int i = 0 ; i<n;i++){
            cout<<arr[i];
            cout<< " ";
        }
    // cout<<arr[k-1];
    return 0;
}
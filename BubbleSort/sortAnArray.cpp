// Time complexity: O(N2), (where N = size of the array), for the worst, and average cases.
// space complexity: O(1)

// Use Bubble Sort when working with nearly sorted data, small datasets, or for learning purposes due to its simpler comparison-based approach. Use the optimized version to make it more efficient

// input = {13, 46, 24, 52, 20, 9}
// output = 9 13 20 24 46 52


#include <iostream>
using namespace std;
int main() {
    int arr[] = {13, 46, 24, 52, 20, 9};
    int n = sizeof(arr) / sizeof(arr[0]);
   for(int i = 0;i<n-1;i++){
       int isSwapp = 0;
       for(int j=0;j<n-i-1;j++){
           if(arr[j]>arr[j+1]){
               isSwapp = 1;
               int temp = arr[j];
               arr[j]=arr[j+1];
               arr[j+1] = temp;
           }
           
       }
       
       if(!isSwapp){
           break;
       }
   }
   
   for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << "\n";

    return 0;
}
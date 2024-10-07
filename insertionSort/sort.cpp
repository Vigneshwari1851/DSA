/*
insertion sort is a simple sorting algorithm that works similar to the way you sort playing cards in your hands. 

time complexity: O(n^2) in worrst case , average case
best case and O(n) in best case
space complexity: O(1)

input = {29, 10, 14, 37, 13}
output = 10 13 14 29 37

*/
#include <iostream>
using namespace std;
int main() {
   int arr[] = {29, 10, 14, 37, 13};
   int n = sizeof(arr) / sizeof(arr[0]);
   
   for (int i = 1; i < n; i++) {
       int key = arr[i];
       int j = i-1;
       
       while(j>=0 && arr[j]>key)
       {
           arr[j+1] = arr[j];
           j--;
       }
       arr[j+1]=key;
    }
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}
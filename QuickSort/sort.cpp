/*

quick sort :

1.Pick a pivot
2.partition the array around the pivot
3.sort the sub arrays
4.combine the sub arrays


time complexity: O(n^2) in worst case, O(nlogn) in best case and average case
space complexity: O(logn)

input = {10, 7, 8, 9, 1, 5}
output = 1 5 7 8 9 10

*/

#include <iostream>
using namespace std;

void swap(int &a, int &b){
    int temp = a;
    a = b;
    b = temp;
    
}

int partition(int a[] , int lb , int ub){
    int pivot = a[lb];
    int start = lb;
    int end = ub;
    
    while(start<end){
        while(a[start]<= pivot){
            start++;
        }
        
        while(a[end]>pivot){
            end--;
        }
        if(start<end){
            swap(a[start],a[end]);
        }
    }
    swap(a[lb],a[end]);
    return end;
}

void quickSort(int a[], int lb, int ub){
    if(lb<ub){
        int pi =partition(a,lb,ub);
        quickSort(a,lb,pi-1);
        quickSort(a,pi+1,ub);
    }
}

void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++)
        cout << arr[i] << " ";
    cout << endl;
}

int main() {
    int a[] = {8, 3, 1, 7, 0, 10, 2};
    int n = sizeof(a) / sizeof(a[0]);

    cout << "Original array: ";
    printArray(a, n);

    quickSort(a, 0, n - 1);

    cout << "Sorted   array:  ";
    printArray(a, n);

    return 0;
}
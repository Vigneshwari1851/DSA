/*
 1.Partially sorted array - half part already sorted
 2.but in selection sort (O(n²)) can still be inefficient because it does not take advantage of the existing order

 3.so use roated array for partial sort it is O(log(n))

 */

// Input: [10, 20, 30, 40, 50, 5, 15, 35 ]
// Output: [5 10 15 20 30 35 40 50 ]

#include <iostream>
using namespace std;
int main()
{
    // Write C++ code here
    int arr[] = {10, 20, 30, 40, 50, 5, 15, 35};
    // int n = size(arr);
    int n = sizeof(arr) / sizeof(arr[0]);

    for (int i = 0; i < n - 1; i++)
    {
        int mini = i;

        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[mini])
            {
                mini = j;
            }
        }
        if (mini != i)
        {
            swap(arr[i], arr[mini]);
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout << arr[i];
        cout << " ";
    }
    return 0;
}
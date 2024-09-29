// Sort by absolute values

// Input: [ -5, 3, -12, 10, -1 ]
// Output: [-1 3 -5 10 -12 ]

#include <iostream>
#include <stdlib.h>
using namespace std;
int main()
{
    // Write C++ code here
    int arr[] = {-5, 3, -12, 10, -1};
    // int n = size(arr);
    int n = sizeof(arr) / sizeof(arr[0]);

    for (int i = 0; i < n - 1; i++)
    {
        int mini = i;
        for (int j = i + 1; j < n; j++)
        {
            if (abs(arr[j]) < abs(arr[mini]))
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
// 2. Sort in descending order

// Input: [64, 25, 12, 22, 11]
// Output: [64, 25, 22, 12, 11]
#include <iostream>
using namespace std;
int main()
{
    // Write C++ code here
    int arr[] = {64, 25, 12, 22, 11};
    // int n = size(arr);
    int n = sizeof(arr) / sizeof(arr[0]);
    for (int i = 0; i < n - 1; i++)
    {
        int maxi = i;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] > arr[maxi])
            {
                maxi = j;
            }
        }
        if (maxi != i)
        {
            swap(arr[i], arr[maxi]);
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout << arr[i];
        cout << " ";
    }
    return 0;
}
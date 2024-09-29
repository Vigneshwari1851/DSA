// 3. Find the k-th smallest element

// Input: arr = [64, 25, 12, 22, 11], k = 3
// Output: 22 (3rd smallest element)

#include <iostream>
using namespace std;
int main()
{
    // Write C++ code here
    int k = 3;
    int arr[] = {64, 25, 12, 22, 11};
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
    cout << arr[k - 1];
    return 0;
}
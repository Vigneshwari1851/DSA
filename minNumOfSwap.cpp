/*
 Minimum number of swaps to sort the array

  input array [64, 25, 12, 22, 11]
  Output: Minimum number of swaps to sort the array: 4 but selection sort correctly without unnecessary so ouput is 3 

 */

#include <iostream>
using namespace std;
int minSort(int arr[], int n)
{
    int swaps = 0;

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
            swaps++;
        }
    }

    return swaps;
}

int main()
{
    int arr[] = {64, 25, 12, 22, 11};
    int n = sizeof(arr) / sizeof(arr[0]);
    int minSwapCount = minSort(arr, n);

    cout << "sorted array: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    cout << "Minimum no of swaps to sort the array: " << minSwapCount << endl;

    return 0;
}
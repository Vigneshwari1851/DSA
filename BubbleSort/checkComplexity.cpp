
/*
Time complexity: O(N2), (where N = size of the array), for the worst, and average cases.
Time complexity: O(N), (where N = size of the array), for the best case. (need to use max sort array use flag)
space complexity: O(1)

input = {10, 12, 14, 15, 13, 16}
output =
swapped
swapped
10 12 13 14 15 16  

input  = {5, 10, 15, 20, 25, 30};
output = 5 10 15 20 25 30


*/
#include <iostream>
using namespace std;
int main()
{
    // int arr[] = {5, 10, 15, 20, 25, 30}; // no swap
    int arr[] = {10, 12, 14, 15, 13, 16}; // It needs to swap 2 tyms.
    int n = sizeof(arr) / sizeof(arr[0]);
    for (int i = 0; i < n - 1; i++)
    {
        int isSwap = 0;
        for (int j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                isSwap = 1;
                cout << "swapped" << "\n";
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }

        if (!isSwap)
        {
            break;
        }
    }

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << "\n";

    return 0;
}
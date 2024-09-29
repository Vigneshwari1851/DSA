/*
  Sort strings using selection sort

  Input: ["apple", "banana", "grape", "cherry", "date"]
  Output: ["apple", "banana", "cherry", "date", "grape"]

 */

#include <iostream>
using namespace std;
void sortAlp(string arr[], int n)
{
    // Write C++ code here
    // char arr[] = {"apple", "banana", "grape", "cherry", "date"};
    // int n = size(arr);
    // int n = sizeof(arr) / sizeof(arr[0]);

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
}

int main()
{
    string arr[] = {"apple", "banana", "grape", "cherry", "date"};
    int n = sizeof(arr) / sizeof(arr[0]);
    sortAlp(arr, n);

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
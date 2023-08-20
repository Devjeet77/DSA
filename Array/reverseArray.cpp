#include <iostream>
#include <limits.h>
using namespace std;

int main()
{

    int arr[100];
    int size;

    int maxi = INT_MIN;
    int mini = INT_MAX;
    cout << "Enter the no of values to print";
    cin >> size;

    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
        // cout << arr[i] << " ";
    }
    // code to reverse an array
    int start = 0;
    int end = size - 1;
    while (start <= end)
    {
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}
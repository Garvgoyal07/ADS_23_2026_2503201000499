#include <iostream>
using namespace std;

int binarySearch(int arr[], int start, int end, int target)
{
    // Base case: element not found
    if (start > end)
        return -1;

    // Find middle index
    int mid = start + (end - start) / 2;

    // Element found
    if (arr[mid] == target)
        return mid;

    // Search in left half
    if (target < arr[mid])
        return binarySearch(arr, start, mid - 1, target);

    // Search in right half
    else
        return binarySearch(arr, mid + 1, end, target);
}

int main()
{
    int n, target;

    cout << "Enter size of array: ";
    cin >> n;

    int arr[n];

    cout << "Enter sorted array elements: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << "Enter target element: ";
    cin >> target;

    int result = binarySearch(arr, 0, n - 1, target);

    if (result == -1)
        cout << "Element not found";
    else
        cout << "Element found at index: " << result;

    return 0;
}
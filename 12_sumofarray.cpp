#include <iostream>
using namespace std;

int sumArray(int arr[], int n)
{
    // Base case
    if (n == 0)
        return 0;

    // Recursive call
    return arr[n - 1] + sumArray(arr, n - 1);
}

int main()
{
    int n;

    cout << "Enter size of array: ";
    cin >> n;

    int arr[n];

    cout << "Enter array elements: ";

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << "Sum of array = " << sumArray(arr, n);

    return 0;
}
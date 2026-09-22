#include <iostream>
#include <cstdlib>
using namespace std;

int partition(int a[], int low, int high) {
    int pivot = a[high];
    int i = low - 1;

    for (int j = low; j < high; j++) {
        if (a[j] < pivot) {
            i++;
            swap(a[i], a[j]);
        }
    }

    swap(a[i + 1], a[high]);
    return i + 1;
}

void quicksort(int a[], int low, int high) {
    if (low >= high) {  
        return;
    }

    // Choose a random pivot
    int randomindex = rand() % (high - low + 1) + low;
    swap(a[randomindex], a[high]);

    int p = partition(a, low, high);

    quicksort(a, low, p - 1);
    quicksort(a, p + 1, high);
}

int main() {
    int arr[] = {10, 7, 8, 9, 1, 5};
    int n = sizeof(arr) / sizeof(arr[0]);

    quicksort(arr, 0, n - 1);

    cout << "Sorted array: ";

    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    cout << endl;

    return 0;
}
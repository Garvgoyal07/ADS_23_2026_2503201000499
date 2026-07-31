#include <iostream>
using namespace std;

int main() {
    int arr1[] = {2, 7, 9, 15, 20, 29};
    int arr2[] = {1, 4, 10, 30, 31};

    int n = 6;
    int m = 5;

    int merged[n + m];
 int i = 0, j = 0, k = 0;
    while (i < n && j < m) {
        if (arr1[i] < arr2[j]) {
            merged[k] = arr1[i];
            i++;
        } else {
            merged[k] = arr2[j];
            j++;
        }
        k++;
    } while (i < n) {
        merged[k] = arr1[i];
        i++;
        k++;
    }

    while (j < m) {
        merged[k] = arr2[j];
        j++;
        k++;
    }
    cout << "Merged Array: ";
    for (int x = 0; x < n + m; x++) {
        cout << merged[x] << " ";
    }

    return 0;
}
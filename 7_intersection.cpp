#include <iostream>
using namespace std;

int main() {
    int arr1[] = {2, 7, 9, 15, 20, 29};
    int arr2[] = {1, 4, 9, 20, 30, 31};

    int n = 6;
    int m = 6;

    int i = 0, j = 0;

    cout << "Intersection of the arrays: ";

    while (i < n && j < m) {
        if (arr1[i] == arr2[j]) {
            cout << arr1[i] << " ";
            i++;
            j++;
        }
        else if (arr1[i] < arr2[j]) {
            i++;
        }
        else {
            j++;
        }
    }

    return 0;
}
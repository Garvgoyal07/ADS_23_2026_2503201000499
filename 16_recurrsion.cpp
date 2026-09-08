#include <bits/stdc++.h>
using namespace std;

int recursion(int a, int n)
{
    // Base case
    if (n == 0)
    {
        return 1;
    }

    // Recursive case
    return a * recursion(a, n - 1);
}

int main()
{
    int a, n;

    cout << "Enter base: ";
    cin >> a;

    cout << "Enter power: ";
    cin >> n;

    cout << a << " raised to " << n << " = " << recursion(a, n);

    return 0;
}
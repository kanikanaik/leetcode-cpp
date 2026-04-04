#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n = 5;
    int arr[n] = {1, 2, 3, 4, 5};

    // Rotate array by 1
    //  a[i] = {2, 3, 4, 5, 1};
    //  a[i] = {3, 4, 5, 1, 2};

    int temp = arr[0];
    for (int i = 1; i < n; i++)
    {
        arr[i - 1] = arr[i];
    }
    arr[n - 1] = temp;

    for (auto a : arr)
    {
        cout << a << " ";
    }
}
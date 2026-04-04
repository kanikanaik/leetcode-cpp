#include <bits/stdc++.h>
using namespace std;

int largestNum(vector<int> arr, int n)
{
    // int largest = arr[0];
    // for (int i = 0; i < n; i++)
    // {
    //     // cout << arr[i] << " ";
    //     if (largest < arr[i])
    //     {
    //         largest = arr[i];
    //     }
    // }
    // return largest;

    sort(arr.begin(), arr.end());
    return arr[n - 1];
}

int main()
{
    int n = 5;
    vector<int> arr = {8, 10, 5, 7, 9};

    cout << "Largest Element is : " << largestNum(arr, n) << endl;
}
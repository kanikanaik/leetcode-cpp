#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int compare(int a, int b)
{
    if (a == b)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int main()
{
    vector<int> arr = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int n = arr.size();
    int count = 0;

    // //Brute Force Approach
    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = i + 1; j < n; j++)
    //     {
    //         count += compare(arr[i], arr[j]);
    //     }
    // }

    // cout << " There are similar ways : " << count;

    // Two Pointer Strategies

    // 1. Inward Traversal
    int left = 0;
    int right = n - 1;

    for (int i = 0; i < n; i++)
    {
    }
}
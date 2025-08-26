// Find maximum (or minimum) sum of a subarray of size k

#include <iostream>
#include <vector>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    vector<int> arr = {3, 8, 2, 5,7, 6, 12};
    int k = 4;

    int current = 0;
    for (int i = 0; i < k; i++)
    {
        current += arr[i];
    }

    int maxx = current;
    for (int i = 1; i < arr.size() - k; i++)
    {
        current = current - arr[i - 1] + arr[i + k - 1];
        if (current > maxx)
        {
            maxx = current;
        }
    }
    cout << maxx << " ";
}

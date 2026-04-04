#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n = 10;
    vector<int> arr = {1, 0, 2, 3, 2, 0, 0, 4, 5, 1};

    for (int i = 0; i < n; i++)
    {
        if (arr[i] == 0)
        {
            arr.erase(arr.begin() + i);
            // arr.push_back(0);
        }
    }

    for (auto a : arr)
    {
        cout << a << " ";
    }
}
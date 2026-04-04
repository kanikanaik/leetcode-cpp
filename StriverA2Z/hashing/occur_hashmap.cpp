#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n = 6;
    int nums[n] = {1, 2, 3, 1, 2, 5};

    map<int, int> num_dict;

    for (int i = 0; i < n; i++)
    {
        num_dict[nums[i]]++;
    }

    for (auto a : num_dict)
    {
        cout << a.first << " " << a.second << endl;
    }
}
// 1512. Number of Good Pairs
#include <iostream>
#include <vector>
#include <bits/stdc++.h>
#include <unordered_map>
using namespace std;

vector<int> getSneakyNumbers(vector<int> &nums)
{
    vector<int> res;
    unordered_map<int, int> count;

    for (int num : nums)
    {
        count[num]++;
    }

    for (auto i : count)
    {
        if (i.second >= 2)
        {
            res.push_back(i.first);
            // cout << i.first << " : " << i.second << endl;
        }
    }

    return res;
}

int main()
{
    vector<int> nums = {0, 3, 2, 1, 3, 2};
    for (int i : getSneakyNumbers(nums))
    {
        cout << i << " ";
    };
}

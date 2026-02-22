#include <bits/stdc++.h>
using namespace std;

vector<int> subarray(vector<int> &nums)
{
    vector<int> subs;
    for (int i = 0; i < nums.size(); i++)
    {
        for (int j = i; j < nums.size(); j++)
        {
            subs.push_back(nums[j]);
        }
    }
    return subs;
}

int main()
{
    vector<int> nums = {1, 2, 3, 4};
    vector<int> subs = subarray(nums);

    // for (int i = 0; i < subs.size(); i++)
    // {
    //     if (nums.size() >= 3)
    //     {
    //     }
    // }
}
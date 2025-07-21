

#include <iostream>
#include <bits/stdc++.h>
#include <vector>

using namespace std;

vector<int> twoSum(vector<int> &nums, int target)
{
    // vector<int> res = {-1, -1} ;
    for (int i = 0; i < nums.size(); i++)
    {
        for (int j = i + 1; j < nums.size(); j++)
        {
            if (nums[i] + nums[j] == target & i != j)
            {
                // cout << res << endl;
                return {i, j};
            }
        }
    }
    return {-1,-1};
}

int main()
{
    vector<int> nums = {5, 4, 5, 6};
    int target = 10;

    vector<int> res = twoSum(nums, target);
    for (int i : res)
    {
        cout << i << endl;
    }
}
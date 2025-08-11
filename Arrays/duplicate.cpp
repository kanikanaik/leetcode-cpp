// Contains Duplicate
#include <iostream>
#include <vector>
#include <bits/stdc++.h>

using namespace std;

bool isDuplicate(vector<int> &nums)
{
    // //brute force approach
    // for (int i = 0; i < nums.size() - 1; i++)
    // {
    //     for (int j = i + 1; j < nums.size(); j++)
    //     {
    //         if (nums[i] == nums[j])
    //         {
    //             return true;
    //         }
    //     }
    // }
    // return false;

    // Sorting method
    sort(nums.begin(), nums.end());
    for (int i = 1; i < nums.size(); i++)
    {
        if (nums[i - 1] == nums[i])
        {
            return true;
        }
    }
    return false;
}

int main()
{
    vector<int> nums = {1, 2, 3, 1}; // true 1
    // vector<int> nums = {1, 2, 3, 1};// false 0
    cout << isDuplicate(nums) << endl;
}

#include <iostream>
#include <vector>
#include <bits/stdc++.h>

using namespace std;

vector<int> twoSum(vector<int> &nums, int target)
{
    int left = 0;
    int right = nums.size() -1;

    while (left < right)
    {
        int pairSum = nums[left] + nums[right];
        if (pairSum > target)
        {
            right--;
        }
        else if (pairSum < target)
        {
            left++;
        }
        else
        {
            vector<int> res = {left, right};
            return res;
        }
    }
    return {};
}
int main()
{
    vector<int> nums = {3,2,4};
    int target = 6;

    vector<int> res = twoSum(nums, target);
    for (int val : res)
    {
        cout << val << " ";
    }
}
// 268. Missing Number

#include <iostream>
#include <vector>
#include <bits/stdc++.h>

using namespace std;

bool search(vector<int> &nums, int target)
{
    int left = 0;
    int right = nums.size() - 1;

    while (left <= right)
    {
        int mid = (left + right) / 2;

        if (nums[mid] == target)
        {
            return true;
        }
        if (nums[mid] < target)
        {
            left = mid + 1;
        }
        else
        {
            right = mid - 1;
        }
    }
    return false;
}
int missingNumber(vector<int> &nums)
{
    int leng = nums.size(); // 3
    sort(nums.begin(), nums.end());
    for (int i = 0; i <= leng; i++)
    {
        if (search(nums, i) == false)
        {
            return i;
        }
    }
    return -1;
}

int main()
{
    vector<int> nums = {0,1};
    int res = missingNumber(nums);
    cout << res;
}
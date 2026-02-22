#include <iostream>
#include <bits/stdc++.h>

using namespace std;

vector<int> pairsum(vector<int> nums, int target)
{
    int left = 0;
    int right = nums.size() - 1;
    // int sum;

    while (left < right)
    {
        int sum = nums[left] + nums[right];

        if (sum < target)
        {
            left += 1;
        }
        else if (sum > target)
        {
            right -= 1;
        }
        else
        {
            return {left, right};
        }
    }
    return {-1, -1};
}

int main()
{
    vector<int> nums = {-5, -2, 3, 4, 6};
    int target = 7;

    vector<int> res = pairsum(nums, target);
    // cout << res;

    for (auto x : res)
    {
        cout << x << " ";
    }

    // keep at i;
    // keep iterating j until(i + j) = target;
    // if not found
    //     i += 1;
}
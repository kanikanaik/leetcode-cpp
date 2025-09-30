#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int triangularSum(vector<int> &nums)
{
    // Brute Force Approach
    while (nums.size() > 1)
    {
        vector<int> res;
        for (int i = 1; i < nums.size(); i++)
        {
            res.push_back((nums[i] + nums[i - 1]) % 10);
        }
        nums = res;
    }
    return nums[0];
}

int main()
{
    vector<int> nums = {1, 2, 3, 4, 5};
    cout << "Triangular Sum is : " << triangularSum(nums) << endl;
}
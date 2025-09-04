#include <iostream>
#include <vector>
#include <bits/stdc++.h>

using namespace std;

vector<int> prefixSum;

NumArray(vector<int> &nums)
{
    vector<int> prefixSum(nums.size() + 1, 0);
    vector<int> sumRange = {1, 5};

    prefixSum[0] = nums[0];

    for (int i = 1; i < nums.size(); i++)
    {
        prefixSum[i] = prefixSum[i - 1] + nums[i];
    }
}

int sumRange(int left, int right)
{
}

int main()
{
    vector<int> arr = {-2, 0, 3, -5, 2, -1};

    if (left == 0)
    {
        return prefixSum[right];
    }
}
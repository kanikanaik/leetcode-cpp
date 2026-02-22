#include <bits/stdc++.h>

using namespace std;

vector<vector<int>> subarray(vector<int> &nums)
{
    vector<vector<int>> subs;
    for (int i = 0; i < nums.size(); i++)
    {
        vector<int> temp;
        for (int j = i; j < nums.size(); j++)
        {
            temp.push_back(nums[j]);
            subs.push_back(temp);
        }
    }
    return subs;
}
int sumOfArray(vector<int> &num)
{
    int sum = 0;
    for (int i = 0; i < num.size(); i++)
    {
        sum += num[i];
    }
    return sum;
}

int numSubarraysWithSum(vector<int> &nums, int goal)
{
    vector<vector<int>> res = subarray(nums);
    int count = 0;
    for (int i = 0; i < res.size(); i++)
    {
        if (sumOfArray(res[i]) == goal)
        {
            count += 1;
            ;
        }
    }
    return count;
}

int main()
{
    vector<int> nums = {0, 0, 0, 0, 0};
    int goal = 0;

    cout << numSubarraysWithSum(nums, goal) << endl;
}
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
int main()
{
    vector<int> nums = {1, 0, 1, 0, 1};
    int goal = 2;

    // cout << sumOfArray(nums);
    vector<vector<int>> res = subarray(nums);
    int count = 0;
    // for (int i = 0; i < res.size(); i++)
    // {
    //     for (int j = 0; j < res[i].size(); j++)
    //     {
    //         cout << res[i][j] << " ";
    //     }
    //     cout << endl;
    // }

    for (int i = 0; i < res.size(); i++)
    {
        if (sumOfArray(res[i]) == goal)
        {
            count += 1;
            ;
        }
    }
    cout << count;
    // return 0;
}
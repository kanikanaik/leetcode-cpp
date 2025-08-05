// 2206. Divide Array Into Equal Pairs

#include <iostream>
#include <vector>
#include <bits/stdc++.h>

using namespace std;

bool divideArray(vector<int> &nums)
{
    sort(nums.begin(), nums.end());
    bool isPair = true;

    for (int i = 1; i < nums.size(); i += 2)
    {
        if (nums[i - 1] == nums[i])
        {
            continue;
        }
        else
        {
            isPair = false;
            return isPair;
        }
    }
    return isPair;
}

int main()
{
    vector<int> nums = {1, 2, 3, 4};
    if (divideArray(nums))
    {
        cout << "true";
    }
    else
    {
        cout << "false";
    }
    // if(nums.size  )
    // cout << nums.size();
}
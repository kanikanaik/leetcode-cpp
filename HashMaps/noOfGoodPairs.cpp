#include <iostream>
#include <vector>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    vector<int> nums = {1, 2, 3, 1, 1, 3};
    unordered_map<int, int> res;
    int count = 0;
    for (int i = 0; i < nums.size(); i++)
    {
        if(res.find(nums[i]) != res.end()){
            count += res[nums[i]];
        }
        res[nums[i]] = res[nums[i]] + 1;
    }
    return count;
}
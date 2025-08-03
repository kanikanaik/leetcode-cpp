// 1. Two Sum

#include <bits/stdc++.h>

using namespace std;

vector<int> twoSum(vector<int> &nums, int target)
{

    vector<pair<int, int>> A;
    for (int i = 0; i < nums.size(); i++)
    {
        A.push_back({nums[i], i});
    }

    sort(A.begin(), A.end());

    int left = 0;
    int right = nums.size() - 1;

    while (left < right)
    {
        // int mid = (left +right) / 2;

        int sum = A[left].first + A[right].first;
        if (sum == target)
        {
            return {min(A[left].second,A[right].second), max(A[left].second,A[right].second)};
        }
        else if(sum < target){
            left++;
        }
        else{
            right++;
        }

    }
    return {};
}

int main()
{
    vector<int> nums = {2, 7, 11, 15};
    int target = 9;

}
// 34. Find First and Last Position of Element in Sorted Array


#include <iostream>
#include <bits/stdc++.h>
#include <vector>

using namespace std;

int binarySearch(vector<int> &nums, int target, bool leftBias)
{
    int left = 0;
    int right = nums.size() - 1;
    int i = -1;

    while (left <= right)
    {
        int mid = (left + right) / 2;

        if (nums[mid] < target)
        {
            left = mid + 1;
        }
        if (nums[mid] > target)
        {
            right = mid - 1;
        }
        else
        {
            i = mid;
            if(leftBias){
                right = mid - 1;
            }
            else{
                left = mid + 1;
            }
        }
    }
    return i;
}

vector<int> searchRange(vector<int>& nums, int target) {
    int left = binarySearch(nums,target,true);
    int right = binarySearch(nums,target,false);
    return {left,right};
}

int main()
{
    vector<int> nums = {5, 7, 7, 8, 8, 10};
    int target = 8;

    vector<int> res = searchRange(nums,target);
    for(int i = 0; i < res.size();i++){
        cout << res[i] << endl;
    }
    // cout << res << endl;
}
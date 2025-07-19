// 35. Search Insert Position

#include <iostream>
#include <bits/stdc++.h>
#include <vector>

using namespace std;

int searchInsert(vector<int> &nums, int target)
{
    int left = 0;
    int right = nums.size() -1;

    while(left <= right){
        int mid = (left + right) / 2;
        
        if(nums[mid] == target){
            return mid;
        }
        if(nums[mid] < target){
            left = mid + 1;
        }
        else{
            right = mid - 1;
        }
    }
     return left;
}

int main()
{
    vector<int> nums = {1, 3,4, 7};
    int target = 5;

    int result = searchInsert(nums, target);
    cout << result << endl;
}
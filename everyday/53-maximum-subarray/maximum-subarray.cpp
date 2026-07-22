#include <bits/stdc++.h>
#include <climits>
class Solution {
public:
    // int maxSubArray(vector<int>& nums) {
    //     int maxSum = INT_MIN;
    //     for(int i = 0 ; i < nums.size(); i++){
    //        int curr = 0;
    //         for(int j = i; j < nums.size(); j++){
    //             // int m
    //             curr += nums[j];
    //             if(curr > maxSum){
    //                 maxSum = curr;
    //             }
    //         }
    //     }
    //     return maxSum;
    // }

    int maxSubArray(vector<int>& nums) {
       int curr = nums[0];
       int maxSum = nums[0];

        for(int i = 1; i < nums.size(); i++){
            curr = max(nums[i], curr + nums[i]);
            maxSum = max(maxSum,curr);
        }
        return maxSum;
    }
};
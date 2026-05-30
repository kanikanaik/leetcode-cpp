#include <bits/stdc++.h>
class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int index=0;
        // vector<int> temp;
        // int len = nums.size();
        
        for(int i = 0; i < nums.size(); i++){
            if(nums[i] != val){
                nums[index] = nums[i];
                index++;
            }        
        }
        return index;
    }
    
};
// 33. Search in Rotated Sorted Array

#include <iostream>
#include <vector>

using namespace std;

int search(vector<int>& nums, int target) {
        for(int i = 0;i<nums.size();i++){
            if (nums[i] == target){
                return i;
            }
        }
        return -1;
    }

int main(){
    vector<int> nums = {1};
    int target = 0;

    cout << search(nums,target) << endl; 
}
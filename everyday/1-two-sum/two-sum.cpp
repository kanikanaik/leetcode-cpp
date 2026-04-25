class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        // for(int i = 0; i < nums.size(); i++){
        //     for(int j = 1; j < nums.size(); j++){
        //         if(nums[i] + nums[j] == target){
        //             return {i,j};
        //         }
        //     }
        // }
        // return {-1,-1};

        unordered_map<int, int> mp; 
        int n = nums.size();
        for (int i = 0; i < n; i++) {
            int complement = target - nums[i];
            if (mp.find(complement) != mp.end()) {
                return {mp[complement], i};
            }

            mp[nums[i]] = i;
        }
        return {-1, -1}; 
    }
};


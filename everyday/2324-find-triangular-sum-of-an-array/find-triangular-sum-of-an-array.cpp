class Solution {
public:
    int triangularSum(vector<int>& nums) {
        while (nums.size() > 1) {
            vector<int> res;
            for (int i = 1; i < nums.size(); i++) {
                res.push_back((nums[i] + nums[i - 1]) % 10);
            }
            nums = res;
        }
        return nums[0];
    }
};
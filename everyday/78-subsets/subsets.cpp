class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<int> curr;
        vector<vector<int>> result;
        dfs(0, nums, curr, result);
        return result;
    }
private:
    void dfs(int i, vector<int>& nums, vector<int>& curr, vector<vector<int>>& result) {
        if (i >= nums.size()) {
            result.push_back(curr);
            return;
        }

        curr.push_back(nums[i]);
        dfs(i + 1, nums, curr, result);
        curr.pop_back();
        dfs(i + 1, nums, curr, result);
    }
};
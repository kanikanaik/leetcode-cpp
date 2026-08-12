class Solution {
public:
    void dfs(int idx, vector<int>& nums,
             vector<bool>& used,
             vector<vector<int>>& ans,
             vector<int>& ds)
    {
        if (idx == nums.size())
        {
            ans.push_back(ds);
            return;
        }

        for (int i = 0; i < nums.size(); i++)
        {
            if (used[i])
                continue;

            // Skip duplicate choices at this level
            if (i > 0 && nums[i] == nums[i - 1] && !used[i - 1])
                continue;

            used[i] = true;
            ds.push_back(nums[i]);

            dfs(idx + 1, nums, used, ans, ds);

            ds.pop_back();
            used[i] = false;
        }
    }

    vector<vector<int>> permuteUnique(vector<int>& nums)
    {
        vector<vector<int>> ans;
        vector<int> ds;

        sort(nums.begin(), nums.end());

        vector<bool> used(nums.size(), false);

        dfs(0, nums, used, ans, ds);

        return ans;
    }
};
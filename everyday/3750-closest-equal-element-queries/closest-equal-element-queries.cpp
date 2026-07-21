class Solution {
public:
    vector<int> solveQueries(vector<int>& nums, vector<int>& queries) {
        unordered_map<int, vector<int>> mp;
        int n = nums.size();

        // Store all indices
        for (int i = 0; i < n; i++) {
            mp[nums[i]].push_back(i);
        }

        vector<int> ans;

        for (int q : queries) {
            vector<int>& pos = mp[nums[q]];

            if (pos.size() == 1) {
                ans.push_back(-1);
                continue;
            }

            auto it = lower_bound(pos.begin(), pos.end(), q);
            int idx = it - pos.begin();

            // Previous occurrence (wrap around)
            int prev = (idx == 0) ? pos.back() : pos[idx - 1];

            // Next occurrence (wrap around)
            int next = (idx == pos.size() - 1) ? pos.front() : pos[idx + 1];

            int d1 = abs(q - prev);
            d1 = min(d1, n - d1);

            int d2 = abs(q - next);
            d2 = min(d2, n - d2);

            ans.push_back(min(d1, d2));
        }

        return ans;
    }
};
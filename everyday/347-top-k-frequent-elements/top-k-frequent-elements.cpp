class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        // unordered_map<int, int> mp;
        map<int, int> mp;
        vector<int> hey;

        for (int i = 0; i < nums.size(); i++) {
            mp[nums[i]]++;
        }
         priority_queue<pair<int, int>> pq;

        for (auto it : mp) {
            pq.push({it.second, it.first});
        }

        vector<int> ans;

        // Get top k elements
        while (k--) {
            ans.push_back(pq.top().second);
            pq.pop();
        }

        return ans;
    }
};

// {{1.3}, {2,2},{3,1}}

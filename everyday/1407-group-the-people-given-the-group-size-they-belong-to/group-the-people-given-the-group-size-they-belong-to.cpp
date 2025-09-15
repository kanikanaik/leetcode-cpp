class Solution {
public:
    vector<vector<int>> groupThePeople(vector<int>& groupSizes) {
        unordered_map<int, vector<int>> pair;
        vector<vector<int>> res;

        for (int i = 0; i < groupSizes.size(); i++) {
            int size = groupSizes[i];
            pair[size].push_back(i);

            if (pair[size].size() == size) {
                res.push_back(pair[size]);
                pair[size].clear();
            }
        }
        return res;
    }
};
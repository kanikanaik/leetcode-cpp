class Solution {
public:
    vector<int> getSneakyNumbers(vector<int>& nums) {
        vector<int> res;
        unordered_map<int, int> count;

        for (int num : nums) {
            count[num]++;
        }

        for (auto i : count) {
            if (i.second >= 2) {
                res.push_back(i.first);
                // cout << i.first << " : " << i.second << endl;
            }
        }

        return res;
    }
};
class Solution {
public:
    int findPermutationDifference(string s, string t) {
        unordered_map<char, vector<int>> perm;

        for (int i = 0; i < s.size(); i++) {
            perm[s[i]].push_back(i);
            perm[t[i]].push_back(i);
        }
        int sum = 0;
        for (auto& p : perm) {
            auto& v = p.second;
            sum += abs(v[1] - v[0]);
        }
        return sum;
    }
};
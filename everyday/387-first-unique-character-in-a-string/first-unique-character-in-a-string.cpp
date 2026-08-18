class Solution {
public:
    int firstUniqChar(string s) {
        unordered_map<char, int> seq;

        for (auto i : s) {
            seq[i]++;
        }
        for (int i = 0; i < s.length(); i++) {
            if (seq[s[i]] == 1) {
                return i;
                break;
            }
        }

        return -1;
    }
};
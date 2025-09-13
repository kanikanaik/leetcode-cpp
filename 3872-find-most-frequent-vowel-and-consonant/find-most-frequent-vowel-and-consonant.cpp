class Solution {
public:
    int maxFreqSum(string s) {
        unordered_map<char, int> lter;
        int maxCon = 0, maxVo = 0;

        for (char c : s) {
            if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
                lter[c]++;
                maxVo = max(maxVo, lter[c]);
            } else {
                lter[c]++;
                maxCon = max(maxCon, lter[c]);
            }
        }
        return maxCon + maxVo;
    }
};
class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char, int> charMap;
        int left = 0, right = 0, maxLength = 0;
        while (right < s.length()) {
            if (charMap.find(s[right]) != charMap.end()) {
                left = max(charMap[s[right]] + 1, left);
            }
            charMap[s[right]] = right;
            maxLength = max(maxLength, right - left + 1);
            right++;
        }
        return maxLength;
    }
};
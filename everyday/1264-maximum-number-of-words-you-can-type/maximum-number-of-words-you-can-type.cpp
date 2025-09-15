class Solution {
public:
    int canBeTypedWords(const string& text, const string& brokenLetters) {
        bool broken[26] = {false};
        for (char c : brokenLetters)
            broken[c - 'a'] = true;

        string word;
        stringstream ss(text);
        int count = 0;

        while (ss >> word) {
            bool ok = true;
            for (char ch : word) {
                if (broken[ch - 'a']) {
                    ok = false;
                    break;
                }
            }
            if (ok)
                ++count;
        }
        return count;
    }
};
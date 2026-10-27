class Solution {
public:
    bool backspaceCompare(string s, string t) {
        stack<char> sts;
        stack<char> stt;

        for (char c : s) {
            if (c != '#') {
                sts.push(c);
            } else if (!sts.empty()) {
                sts.pop();
            }
        }

        for (char c : t) {
            if (c != '#') {
                stt.push(c);
            } else if (!stt.empty()) {
                stt.pop();
            }
        }

        return sts == stt;
    }
};
class Solution {
public:
    bool isValid(string s) {
        unordered_map<char, char> brac = {{'}', '{'}, {']', '['}, {')', '('}};

        stack<char> st;
        for (int i = 0; i < s.length(); i++) {
            if (brac.count(s[i]) == 0) {
                st.push(s[i]);
            }else if(!st.empty() && brac[s[i]] == st.top()){
                st.pop();
            }else{
                return false;
            }
        }return st.empty();
    }
};
class Solution {
public:
    string removeDuplicates(string s) {
        vector<char> st;
        // st.push_back(s[0]);
        for(int i = 0; i < s.size(); i++){
            
            if(!st.empty() && s[i] == st.back()){
                st.pop_back();
            }else{
                st.push_back(s[i]);
            }
        }
        string res = "";
        for(char a : st){
            res += a;
        }
        return res;
    }
};

// a b b a c a 

// a a c a
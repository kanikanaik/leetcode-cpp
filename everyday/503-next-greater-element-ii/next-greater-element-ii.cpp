class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        // unordered_map<int,int> grt;
        int n = nums.size();
        vector<int> grt(n,-1);
        stack<int> st;
       for(int i = 0; i < nums.size() * 2;i++){
        int idx = i % nums.size();
            while(!st.empty() && nums[st.top()] < nums[idx]){
                grt[st.top()] = nums[idx];
                st.pop();
            }
            if (i < n) {
                st.push(idx);
            }
            // st.push(idx);
       }
       return grt;
    }
};
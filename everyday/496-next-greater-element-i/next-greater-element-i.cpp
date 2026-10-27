class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int,int> grt;
        stack<int> st;
       for(int i = 0; i < nums2.size();i++){
            while(!st.empty() && nums2[st.top()] < nums2[i]){
                grt[nums2[st.top()]] = nums2[i];
                st.pop();
            }
            st.push(i);
       }

       vector<int> ans;
       for(int i =0; i < nums1.size(); i++){
             if (grt.find(nums1[i]) != grt.end()) {
                ans.push_back(grt[nums1[i]]);
            } else {
                ans.push_back(-1);
            }
       }
       return ans;
    }
};

// {
//     {1, 3},{3,4},{4,-1},{2,-1}
// }

// {
//     {1,2},{2,3},{3,4},{4,-1}
// }
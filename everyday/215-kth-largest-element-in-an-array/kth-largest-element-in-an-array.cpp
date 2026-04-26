class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        // int MAX = nums[0];
        // for(int i = 0; i < nums.size(); i++){
        //     MAX = max(MAX,nums[i]);
        // }
        // return MAX;
        // sort(nums.begin(), nums.end());
        // 1,2,

        priority_queue<int> pq;
        for (int i = 0; i < nums.size(); i++) {
            pq.push(nums[i]);
        }

        vector<int> temp;
        priority_queue<int> copy = pq;
        while (!copy.empty()) {
            temp.push_back(copy.top());
            copy.pop();
        }
        // cout << temp;
        // vector<int> temp(pq.begin(), pq.end());
        return temp[k -1];
    }
};
class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {

        priority_queue<int> pq;
        for (int i = 0; i < nums.size(); i++) {
            pq.push(nums[i]);
        }

        vector<int> temp;
        // priority_queue<int> copy = pq;
        while (!pq.empty()) {
            temp.push_back(pq.top());
            pq.pop();
        }
        return temp[k -1];
    }
};
class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> occ;
        vector<int> res;
        for (int i = 0; i < nums.size(); i++) {
            occ[nums[i]]++;
        }

        

        priority_queue<pair<int, int>, vector<pair<int, int>>,
                       greater<pair<int, int>>>
            pq;

        for (auto& p : occ) {
            pq.push({p.second,p.first});
            if (pq.size() > k) {
                pq.pop();
            }
        }

        while (!pq.empty()) {
            res.push_back(pq.top().second);
            pq.pop();
        }

        // for(auto& p: occ){
        //     if(p.second >= k){
        //         res.push_back(p.first);
        //     }
        // }
        return res;
    }
};

// 1 -4
// 2-4
// 3-
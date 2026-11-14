class Solution {
public:
    struct Compare {
        bool operator()(pair<int, string>& a, pair<int, string>& b) {

            if (a.first == b.first) {
                return a.second < b.second;
            }

            return a.first > b.first;
        }
    };
    vector<string> topKFrequent(vector<string>& words, int k) {
        unordered_map<string, int> freq;
        vector<string> ans;

        for (int i = 0; i < words.size(); i++) {
            freq[words[i]]++;
        }
        // we need min heap

         priority_queue<
            pair<int, string>,
            vector<pair<int, string>>,
            Compare
        > pq;

        for (auto& p : freq) {
            pq.push({p.second, p.first});
            // pq.pop();
            if (pq.size() > k) {
                pq.pop();
            }
        }

        while (!pq.empty()) {
            ans.push_back(pq.top().second);
            pq.pop();
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }
};

// the - 4 is - 3 sunny - 2 day - 1
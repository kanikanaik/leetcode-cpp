class Solution {
public:
    string frequencySort(string s) {
        // tree
        // errt
        string res = "";
        unordered_map<char, int> freq;
        for (auto& p : s) {
            freq[p]++;
        }

        priority_queue<pair<int, char>> pq;

        for (auto& p : freq) {
            pq.push({p.second, p.first});
            // pq.pop();
        }
        while (!pq.empty()) {

            res.append(pq.top().first, pq.top().second);
            cout << pq.top().second << " ";
            pq.pop();
        }

        // min heap
        return res;
    }
};
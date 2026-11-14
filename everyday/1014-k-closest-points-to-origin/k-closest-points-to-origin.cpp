
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    long long euclid(int x, int y) { return 1LL * x * x + 1LL * y * y; }

    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {

        vector<vector<int>> res;

        priority_queue<pair<long long, pair<int, int>>> pq;

        for (auto& p : points) {

            pq.push({euclid(p[0], p[1]), {p[0], p[1]}});

            if (pq.size() > k) {
                pq.pop();
            }
        }

        while (!pq.empty()) {
            res.push_back({pq.top().second.first, pq.top().second.second});

            pq.pop();
        }

        return res;
    }
};

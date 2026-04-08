class Solution {
public:
    int xorAfterQueries(vector<int>& nums, vector<vector<int>>& queries) {
        const int MOD = 1000000007;

        for (int i = 0; i < queries.size(); i++) {
            int li = queries[i][0];
            int ri = queries[i][1];
            int ki = queries[i][2];
            int vi = queries[i][3];

            int idx = li;

            while (idx <= ri) {
                nums[idx] = (1LL * nums[idx] * vi) % MOD;
                idx += ki;
            }
        }

        int xor_arr = 0;
        for (int i = 0; i < nums.size(); i++) {
            xor_arr ^= nums[i];
        }

        return xor_arr;
    }
};
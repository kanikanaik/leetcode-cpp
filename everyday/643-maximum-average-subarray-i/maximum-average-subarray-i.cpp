class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {

        double current = 0;
        for (int i = 0; i < k; i++) {
            current += nums[i];
        }

        double maxx = current / k;

        for (int i = 1; i <= nums.size() - k; i++) {
            current = current - nums[i - 1] + nums[i + k - 1];
            if (current / k > maxx) {
                maxx = current / k;
            }
        }
        return maxx;
    }
};
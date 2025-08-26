// 3427. Sum of Variable Length Subarrays

#include <iostream>
#include <vector>

using namespace std;

int subarraySum(vector<int> &nums)
{
    // Brute Force approach
    int ans = 0;
    for (int i = 0; i < nums.size(); i++)
    {
        int start = 0;
         start = max(0, i - nums[i]);
        int sum = 0;
        for (int j = start; j <= i; j++)
        {
            sum += nums[j];
            // cout << sum;
        }
        ans += sum;
    }
    return ans;
}

int main()
{
    vector<int> nums = {2, 3, 1};
    int ans = subarraySum(nums);
    cout << ans ;
    // vector<int> prefixSum(nums.size(), 0);

    // for (int i = 1; i < nums.size(); i++)
    // {
    //     prefixSum[i] = prefixSum[i - 1] + nums[i];
    //     // prefixSum.push_back(prefixSum[i]);
    // }
    // for (int i : prefixSum)
    // {
    //     cout << i << " ";
    // }
}

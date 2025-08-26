#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> nums = {1, 2, 3, 4, 5, 6};
    vector<int> prefixSum(nums.size());

    prefixSum[0] = nums[0];

    for (int i = 1; i < nums.size(); i++)
    {
        prefixSum[i] = prefixSum[i - 1] + nums[i];
        // prefixSum.push_back(prefixSum[i]);
    }

    for (int i : prefixSum)
    {
        cout << i << " ";
    }
}
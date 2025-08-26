// 2574. Left and Right Sum Differences

#include <iostream>
#include <vector>

using namespace std;

vector<int> leftRightDifference(vector<int> &nums)
{
    vector<int> leftSum(nums.size(), 0);
    vector<int> rigthSum(nums.size(), 0);
    vector<int> answer(nums.size(), 0);

    // leftSum[0] = 0;
    for (int i = 1; i < nums.size(); i++)
    {
        leftSum[i] = leftSum[i - 1] + nums[i - 1];
    }

    // rigthSum[nums.size() - 1] = 0;
    for (int i = nums.size() - 2; i >= 0; i--)
    {
        rigthSum[i] = rigthSum[i + 1] + nums[i + 1];
    }
    for (int i = 0; i < nums.size(); i++)
    {
        answer[i] = abs(leftSum[i] - rigthSum[i]);
    }
    return answer;
}

int main()
{
    vector<int> nums = {10, 4, 8, 3};
    vector<int> ans = leftRightDifference(nums);
    for (int i : ans)
    {
        cout << i << " ";
    }
}
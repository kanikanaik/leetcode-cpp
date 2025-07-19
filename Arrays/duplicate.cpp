// Contains Duplicate
#include <iostream>
#include <vector>
using namespace std;

bool isDuplicate(vector<int> &nums)
{
    for (int i = 0; i < nums.size() - 1; i++)
    {
        for (int j = i + 1; j < nums.size(); j++)
        {
            if (nums[i] == nums[j])
            {
                // cout << "true" << nums[i] << nums[j] << endl;
                return true;
            }
        }
    }
    return false;
}
int main()
{
    vector<int> nums = {1, 2, 3, 4}; //true 1
    // vector<int> nums = {1, 2, 3, 1};// false 0
    cout << isDuplicate(nums) << endl;
}

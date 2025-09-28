#include <iostream>
#include <vector>

using namespace std;

int largestPerimeter(vector<int> &nums)
{
    int max_peri = 0;
    for (int i = 0; i < nums.size(); i++)
    {
        for (int j = i + 1; j < nums.size(); j++)
        {
            for (int k = j + 1; k < nums.size(); k++)
            {
                if ((nums[i] + nums[j] > nums[k]) && (nums[i] + nums[k] > nums[j]) && (nums[j] + nums[k] > nums[i]))
                {
                    int peri = nums[i] + nums[j] + nums[k];
                    max_peri = max(max_peri, peri);
                }
            }
        }
    }
    return max_peri;
}

int main()
{
    vector<int> nums = {1, 2, 1, 10};
    cout << largestPerimeter(nums) << endl;
}
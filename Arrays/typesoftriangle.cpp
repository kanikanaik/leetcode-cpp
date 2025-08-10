#include <iostream>
#include <vector>

using namespace std;

string triangleType(vector<int> &nums)
{
    if (nums[0] == nums[1] && nums[1] == nums[2])
    {
        return "equilateral";
    }
    else if (nums[0] == nums[1] || nums[0] == nums[2] ||
             nums[1] == nums[2])
    {
        return "isosceles";
    }
    else if (nums[0] + nums[1] > nums[2] && nums[0] + nums[2] > nums[1] &&
             nums[1] + nums[2] > nums[0])
    {
        return "scalene";
    }
    else
    {
        return "";
    }

    // 01,02,12
}
int main()
{
    vector<int> nums = {3,4,5};
    string result = triangleType(nums);
    cout << result << endl;
}

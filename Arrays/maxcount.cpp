// 2529. Maximum Count of Positive Integer and Negative Integer

#include <iostream>
#include <vector>
using namespace std;

int maximumCount(vector<int> &nums)
{
    int pos = 0;
    int neg = 0;
    for (int i = 0; i < nums.size(); i++)
    {
        if (nums[i] > 0)
        {
            pos++;
        }
        if (nums[i] < 0)
        {
            neg++;
        }
    }
    if (pos >= neg)
    {
        return pos;
    }
    else
    {
        return neg;
    }
}

int main()
{
    vector<int> nums = {-2, -1, -1, 1, 2, 3};
}
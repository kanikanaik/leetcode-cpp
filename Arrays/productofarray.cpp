#include <iostream>
#include <vector>

using namespace std;

// vector<int> productExceptSelf(vector<int> &nums)
// {
// }
int main()
{
    vector<int> nums = {1, 2, 3, 4};
    vector<int> answers = {};
    int prod = 1;
    for (int i = 0; i < nums.size(); i++)
    {
        for (int j = i; j < nums.size(); j++)
        {
            if (i != j)
            {
                prod = prod * nums[j];
                // cout << prod << " ";
                answers.push_back(prod);
            }
                }
    }

    for (int i : answers)
    {
        cout << i << " ";
    }
}
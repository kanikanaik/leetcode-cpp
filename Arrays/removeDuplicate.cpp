// Remove Duplicates

#include <vector>
#include <iostream>

using namespace std;

int removeDuplicates(vector<int> &nums)
{
    // vector<int> res(nums.size());

    // res[0] = nums[0];
    int x = 1;

    for (int i = 1; i < nums.size(); i++)
    {
        if (nums[i] != nums[x - 1])
        {
            nums[x] = nums[i];
            x += 1;
        }
    }
    return x;
}

int main()
{

    vector<int> nums = {5, 5, 7, 8, 8, 9, 9, 10, 10};

    for (int i : res)
    {
        cout << i << " ";
    }
}
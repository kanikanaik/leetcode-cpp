// 2367. Number of Arithmetic Triplets

#include <bits/stdc++.h>
using namespace std;

bool search(vector<int> &nums, int target)
{
    int left = 0;
    int right = nums.size() - 1;

    while (left <= right)
    {
        int mid = (left + right) / 2;

        if (nums[mid] == target)
        {
            return true;
        }
        if (nums[mid] < target)
        {
            left = mid + 1;
        }
        else
        {
            right = mid - 1;
        }
    }
    return false;
}

int arithmeticTriplets(vector<int> &nums, int diff)
{
    // Binary Search Time complexity - logn 
    int count = 0;
    for (int x : nums)
        if (search(nums, x + diff) == true && search(nums, x - diff) == true)
            ++count;
    return count;

    // Not optimal approach Time complexity - n^3
    // for (int i = 0; i < nums.size(); i++)
    // {
    //     for (int j = i + 1; j < nums.size(); j++)
    //     {
    //         for (int k = j + 1; k < nums.size(); k++)
    //         {
    //             if (i < j < k)
    //             {
    //                 if (nums[j] - nums[i] == diff & nums[k] - nums[j] == diff)
    //                 {
    //                     count += 1;
    //                 }
    //             }
    //         }
    //     }
    // }
    // return count;

}

int main()
{
    vector<int> nums = {4, 5, 6, 7, 8, 9};
    int diff = 2;
}
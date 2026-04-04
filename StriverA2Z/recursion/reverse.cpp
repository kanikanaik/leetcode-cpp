#include <iostream>
#include <bits/stdc++.h>
// #include <algorithm>

using namespace std;

void swap(int &a, int &b)
{
    int temp;
    temp = a;
    a = b;
    b = temp;
}

// vector<int> reverse(int left, int right, vector<int> &nums)
// {

//     if (left >= right)
//     {
//         return nums;
//     };
//     swap(nums[left], nums[right]);
//     reverse(left + 1, right - 1, nums);
// }

void reverseNum(int i, vector<int> &nums)
{
    int n = nums.size();
    if (i >= n / 2)
        return;
    swap(nums[i], nums[n - i - 1]);
    reverseNum(i + 1, nums);
}
int main()
{
    vector<int> nums = {2, 3, 4, 5, 2, 5, 1};
    int left = 0;
    int right = nums.size() - 1;
    reverseNum(0, nums);
    // for (auto a : nums)
    // {
    //     cout << a << " ";
    // }

    // int left = 0;
    // int right = nums.size() - 1;
    // while (left < right)
    // {
    //     if (nums[left] == nums[right])
    //         break;
    //     swap(nums[left], nums[right]);
    //     left++;
    //     right--;
    // }

    // cout << endl;
    for (auto a : nums)
    {
        cout << a << " ";
    }
}
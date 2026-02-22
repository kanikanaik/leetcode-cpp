// #include <iostream>
// #include <bits/stdc++.h>

// using namespace std;

// vector<int> pairsum(vector<int> nums, int start, int target)
// {
//     int left = start + 1;
//     int right = nums.size() - 1;
//     // int sum;

//     while (left < right)
//     {
//         int sum = nums[left] + nums[right];

//         if (sum < target)
//         {
//             left += 1;
//         }
//         else if (sum > target)
//         {
//             right -= 1;
//         }
//         else
//         {
//             return {left, right};
//         }
//     }
//     return {
//         ,
//     };
// }

// vector<vector<int>> triple_sum(vector<int> nums, int target)
// {
//     for (int i = 0; i < nums.size(); i++)
//     {
//         vector<int> res = pairsum(nums, i, target);
//         if (nums[i] == res[0] + res[1])
//         {
//             cout << nums[i], res[0], res[1];
//         }
//     }
// }
// int main()
// {
//     vector<int> nums = {0, -1, 2, -3, 1};
//     // a + b + c = 0
//     //  a+ b = -c
// }

// 15. 3Sum

#include <iostream>
#include <vector>
#include <bits/stdc++.h>

using namespace std;

// vector<vector<int>> threeSum(vector<int> &nums)
// {
//     vector<vector<int>> res = {};

//     for (int i = 0; i < nums.size(); i++)
//     {
//         for (int j = i + 1; j < nums.size(); j++)
//         {
//             for (int k = j + 1; k < nums.size(); k++)
//             {
//                 if (i != j and i != k and j != k and nums[i] + nums[j] + nums[k] == 0)
//                 {

//                     vector<int> triplet = {nums[i], nums[j], nums[k]};
//                     sort(triplet.begin(), triplet.end());
//                     res.push_back(triplet);
//                 }
//             }
//         }
//     }
//     return res;
// }

vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> res;
        sort(nums.begin(), nums.end());

        for (int i = 0; i < nums.size(); i++) {
            if (i > 0 && nums[i] == nums[i-1]) {
                continue;
            }
            
            int j = i + 1;
            int k = nums.size() - 1;

            while (j < k) {
                int total = nums[i] + nums[j] + nums[k];

                if (total > 0) {
                    k--;
                } else if (total < 0) {
                    j++;
                } else {
                    res.push_back({nums[i], nums[j], nums[k]});
                    j++;

                    while (nums[j] == nums[j-1] && j < k) {
                        j++;
                    }
                }
            }
        }
        return res;        
    }
int main()
{
    vector<int> nums = {-1, 0, 1, 2, -1, -4};
    vector<vector<int>> res = threeSum(nums);
    for (auto triplet : res)
    {
        for (int num : triplet)
        {
            cout << num << " ";
        }
        cout << endl;
    }
}
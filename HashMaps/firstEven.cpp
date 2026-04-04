#include <bits/stdc++.h>
using namespace std;
int firstUniqueEven(vector<int> &nums)
{
    map<int, int> num_dict;

    for (int i = 0; i < nums.size(); i++)
    {
        num_dict[nums[i]]++;
    }

    for (int i = 0; i < nums.size(); i++)
    {
        if (num_dict[nums[i]] == 1 && nums[i] % 2 == 0)
        {
            return nums[i];
        }
    }

    return -1;
}

int main()
{
    vector<int> nums = {8, 2};
    cout << firstUniqueEven(nums) << endl;
    // map<int, int> num_dict;

    // for (int i = 0; i < nums.size(); i++)
    // {
    //     num_dict[nums[i]]++;
    // }

    // // for (auto a : num_dict)
    // // {
    // //     cout << a.first << " " << a.second << endl;
    // // }
    // for (auto a : num_dict){
    //     if(a.second = 1){
    //         return a.first;
    //         break;
    //     }
    // }
}
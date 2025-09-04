#include <iostream>
#include <vector>

using namespace std;

// // Brute Force Approach
// vector<int> productExceptSelf(vector<int> &nums)
// {
//     vector<int> res(nums.size());

//     for (int i = 0; i < nums.size(); i++)
//     {
//         int prod = 1;
//         for (int j = 0; j < nums.size(); j++)
//         {
//             if (i != j)
//             {
//                 prod *= nums[j];
//             }
//         }
//         res[i] = prod;
//     }
//     return res;
// }

vector<int> productExceptSelf(vector<int> &nums)
{
    vector<int> res(nums.size());
    int prod = 1, zeroCount = 0;
    for (int i = 0; i < nums.size(); i++)
    {
        if (nums[i] != 0)
        {
            prod *= nums[i];
        }else{
            zeroCount++;
        }
    }
    // if(zeroCount > 1){
    //     return vector<int>
    // }
    for (int i = 0; i < nums.size(); i++)
    {
        res[i] = prod / nums[i];
    }

    return res;
}

int main()
{
    vector<int> nums = {-1, 1, 0, -3, 3};
    for (int i : productExceptSelf(nums))
    {
        cout << i << " ";
    }
}
// 2149. Rearrange Array Elements by Sign

#include <bits/stdc++.h>
using namespace std;

vector<int> rearrangeArray(vector<int> &nums)
{
    int pos = 0;
    int neg = 1;

    vector<int> res(nums.size());

    // if index is even then push positive else push negative
    for (int i = 0; i < nums.size(); i++)
    {
        if (nums[i] > 0)
        {
            res[pos] = nums[i];
            pos = pos+2;
        }
        else
        {
            res[neg] = nums[i];
            neg = neg + 2;
        }
    }
    // int posIndex = 0, negIndex = 0;
    // for (int i = 0; i < nums.size(); i++)
    // {
    //     if (i % 2 == 0)
    //     {
    //         res.push_back(pos[posIndex++]);
    //     }
    //     else
    //     {
    //         res.push_back(neg[negIndex++]);
    //     }
    // }
    return res;
}

int main()
{
    vector<int> nums = {3, 1, -2, -5, 2, -4};
    vector<int> res = rearrangeArray(nums);
    for (int i : res)
    {
        cout << i << endl;
    }
}
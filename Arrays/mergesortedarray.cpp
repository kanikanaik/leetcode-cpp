
#include <bits/stdc++.h>
#include <vector>
#include <algorithm>

using namespace std;

void merge(vector<int> &nums1, int m, vector<int> &nums2, int n)
{
    vector<int> res= {};

    nums1.insert(nums1.end(), nums2.begin(), nums2.end());
    sort(nums1.begin(),nums1.end());
    for (int i = 0; i < nums1.size(); i++)
    {
        if(nums1[i] > 0 ){
            res.push_back(nums1[i]);
        }

    }
    return res;
}

int main()
{
    vector<int> nums1 = {1, 2, 3, 0, 0, 0};
    int m = 3;
    vector<int> nums2 = {2, 5, 6};
    int n = 3;
    
    
}
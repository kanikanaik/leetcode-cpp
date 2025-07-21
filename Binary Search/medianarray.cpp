// 4. Median of Two Sorted Arrays

#include <bits/stdc++.h>
using namespace std;

double findMedianSortedArrays(vector<int> &nums1, vector<int> &nums2)
{
    nums1.insert(nums1.end(), nums2.begin(), nums2.end());
    sort(nums1.begin(), nums1.end());

    int left = 0;
    int right = nums1.size() - 1;

    // while(left <= right){
    int mid = (left + right) / 2;

    if (nums1.size() % 2 == 0)
    {
        double res = (nums1[mid] + nums1[mid + 1]) / 2.0;
        return res;
    }
    else
    {
        return (double)nums1[mid];
    }
}

int main()
{
    vector<int> nums1 = {1, 2};
    vector<int> nums2 = {3,4};

    cout << findMedianSortedArrays(nums1,nums2) << endl;
    // }
}
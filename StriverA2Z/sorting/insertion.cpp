#include <bits/stdc++.h>
using namespace std;

void swap(int *a, int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

int main()
{
    vector<int> nums = {13, 46, 24, 52, 20, 9};
    int n = nums.size();
    for (int i = 0; i <= n - 1; i++)
    {
        int j = i;
        while (j > 0 && nums[j - 1] > nums[j])
        {
            swap(nums[j], nums[j - 1]);
            j--;
        }
    }
    for (auto a : nums)
    {
        cout << a << " ";
    }
}
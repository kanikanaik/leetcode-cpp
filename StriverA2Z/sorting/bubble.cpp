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
    // Bubble Sort - push max element to end, by adjacent swaps
    //  0    1   2   3   4  5

    vector<int> nums = {13, 46, 24, 52, 20, 9};
    int n = nums.size();
    // step 1 - 0 to 5
    // step 2 - 0 to 4
    // step 3 - 0 to 3
    for (int i = n - 1; i >= 0; i--)
    {
        for (int j = 0; j <= i - 1; j++)
        {
            if (nums[j] > nums[j + 1])
            {
                swap(nums[j], nums[j + 1]);
            }
        }
    }

    for (auto a : nums)
    {
        cout << a << " ";
    }
}
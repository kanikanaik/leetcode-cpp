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

    for (int i = 0; i <= nums.size() - 2; i++)
    {
        int mini = i;
        for (int j = i; j <= nums.size() - 1; j++)
        {
            if (nums[j] < nums[mini])
            {
                mini = j;
            }
        }
        swap(nums[i], nums[mini]);
    }

    for (auto a : nums)
    {
        cout << a << " ";
    }
}
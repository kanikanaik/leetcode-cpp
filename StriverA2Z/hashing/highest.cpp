#include <iostream>
#include <unordered_map>
#include <vector>
using namespace std;

int mostFrequentElement(vector<int> &nums)
{
    unordered_map<int, int> freq;

    // Count frequency
    for (int i = 0; i < nums.size(); i++)
    {
        freq[nums[i]]++;
    }

    int maxFreq = 0;
    int element = nums[0];

    for (auto i : freq)
    {
        if (i.second > maxFreq)
        {
            maxFreq = i.second;
            element = i.first;
        }
    }

    return element;
}

int main()
{
    vector<int> nums = {4, 4, 4, 4, 4, 5, 5, 6};
    cout << mostFrequentElement(nums) << endl;
}
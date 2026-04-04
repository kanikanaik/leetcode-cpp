#include <bits/stdc++.h>
using namespace std;

long long gcdSum(vector<int> &nums)
{
}

int main()
{
    vector<int> nums = {3, 6, 2, 8};
    int mx = *max_element(nums.begin(), nums.end());
    vector<int> prefixGcd;
    for (int i = 0; i < nums.size(); i++)
    {
        int temp = __gcd(nums[i], mx);
        prefixGcd.push_back(temp);
    }
    sort(prefixGcd.begin(), prefixGcd.end());

    cout << "prefixGcs";
    for (auto a : prefixGcd)
    {
        cout << a << " ";
    }
    cout << endl;

    vector<pair<int, int>> gcdPair;
    long long gcdSummat = 0;
    for (int i = 0; i < prefixGcd.size() / 2; i++)
    {
        gcdPair.push_back({prefixGcd[i], prefixGcd[prefixGcd.size() - i - 1]});
    }

    for (auto a : gcdPair)
    {
        cout << endl
             << a.first << " " << a.second;
    }

    for (int i = 0; i < gcdPair.size(); i++)
    {
        int a1 = gcdPair[i].first;
        int a2 = gcdPair[i].second;

        gcdSummat += __gcd(a1, a2);
    }

    cout << gcdSummat << endl;

    // cout << mx;
}

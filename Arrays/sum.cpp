#include <iostream>
#include <vector>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    vector<string> arr = {"hello", "world", "addkshdkad"};
    vector<int> sum = {0,0,0};
    int s = 0;

    for (int i = 0; i < arr.size(); i++)
    {
        sum[i] = s + arr[i].size();
        s = sum[i];

        // sum.push_back((arr[i]).size() + s);
        // s += arr[i].size();
    }

    for (auto i : sum)
        cout << i << " " ;
    return 0;
}
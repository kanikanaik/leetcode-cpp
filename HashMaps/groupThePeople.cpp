// 1282. Group the People Given the Group Size They Belong To

#include <iostream>
#include <vector>
#include <bits/stdc++.h>
#include <unordered_map>

using namespace std;

vector<vector<int>> groupThePeople(vector<int> &groupSizes)
{
    unordered_map<int, vector<int>> pair;
    vector<vector<int>> res;

    for (int i = 0; i < groupSizes.size(); i++)
    {
        int size = groupSizes[i];
        pair[size].push_back(i);

        if(pair[size].size() == size){
            res.push_back(pair[size]);
            pair.clear();
        }
    }
    return res;
    // unordered_map<int, vector<int>> temp_group;
    // vector<vector<int>> result;

    // for (int i = 0; i < groupSizes.size(); ++i)
    // {
    //     int size = groupSizes[i];
    //     temp_group[size].push_back(i);

    //     if (temp_group[size].size() == size)
    //     {
    //         result.push_back(temp_group[size]);
    //         temp_group[size].clear();
    //     }
    // }
    // return result;
}

int main()
{
    vector<int> groupSizes = {3, 3, 3, 3, 3, 1, 3};
    
    // for (auto i : pair)
    // {
    //     cout << i.first << " : " << i.second << endl;
    // }
}
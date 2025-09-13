#include <iostream>
#include <vector>
#include <bits/stdc++.h>

using namespace std;

// int garbageCollection(vector<string>& garbage, vector<int>& travel) {

//     }

vector<int> prefixSum(vector<int> &travel)
{
    vector<int> prefix(travel.size() + 1);

    prefix[0] = 0;

    for (int i = 1; i <= travel.size(); i++)
    {
        prefix[i] += prefix[i - 1] + travel[i - 1];
    }
}

int main()
{
    vector<string> garbage = {"G", "P", "GP", "GG"};
    vector<int> travel = {2, 4, 3};


    vector<int> prefix = prefixSum(travel); 
    unordered_set<char, int> garbageLastPos;
    unordered_set<char, int> garbageCount;

    for (string j : garbage)
    {
        cout << j << " ";
    }
}
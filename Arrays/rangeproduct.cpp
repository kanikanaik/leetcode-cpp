// 2438. Range Product Queries of Powers

#include <iostream>
#include <vector>
#include <bits/stdc++.h>

using namespace std;

vector<int> productQueries(int n, vector<vector<int>> &queries)
{
    vector<int> powers = {};
    vector<int> answers = {};


    for (int bit = 0; (1 << bit) <= n; bit++) {
        if (n & (1 << bit)) {
            powers.push_back(1 << bit);
        }
    }


    for (int i = 0; i < queries.size(); i++)
    {
        long long temp = 1;                                  // reset for each query
        for (int j = queries[i][0]; j <= queries[i][1]; j++) // inclusive range
        {
            temp = (temp * powers[j]) % 1000000007;
        }
        answers.push_back(temp);
    }
    return answers;
}

int main()
{
    int n = 2;
    // vector<vector<int>> queries = {{0, 1}, {2, 2}, {0, 3}};
    vector<vector<int>> queries = {{0, 0}};
    vector <int> answers = productQueries(n,queries);
    

    for (int i : answers)
    {
        cout << i << " ";
    }
}
// 3146. Permutation Difference between Two Strings

#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

int findPermutationDifference(string s, string t)
{
    unordered_map<char, vector<int>> perm;

    for (int i = 0; i < s.size(); i++)
    {
        perm[s[i]].push_back(i);
        perm[t[i]].push_back(i);
    }
    int sum = 0;
    for (auto &p : perm)
    {
        auto &v = p.second;
        sum += abs(v[1] - v[0]);
    }
    return sum;
}

int main()
{
    string s = "abcde", t = "edbac";
    // {a: [0,1], b : [1,0], c: [2,2]}
    cout << findPermutationDifference(s, t) << endl;
}

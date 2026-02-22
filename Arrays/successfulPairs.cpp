#include <bits/stdc++.h>

using namespace std;

vector<int> successfulPairs(vector<int> &spells, vector<int> &potions, long long success)
{
    vector<int> res;

    for (int i = 0; i < spells.size(); i++)
    {
        int count = 0;
        for (int j = 0; j < potions.size(); j++)
        {
            // cout << spells[i] * potions[j];
            if ((long long)spells[i] * potions[j] >= success)
            {
                count += 1;
            }
        }
        res.push_back(count);
    }
    return res;
}
int main()
{
    vector<int> spells = {5, 1, 3}, potions = {1, 2, 3, 4, 5};
    long long success = 7;

    for (int i : successfulPairs(spells, potions, success))
    {
        cout << i << " ";
    }
}
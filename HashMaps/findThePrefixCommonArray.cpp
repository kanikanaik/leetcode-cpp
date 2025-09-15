// 2657. Find the Prefix Common Array of Two Arrays

#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

int main()
{
    vector<int> A = {1, 3, 2, 4}, B = {3, 1, 2, 4};
    unordered_map<int, vector<int>> list;
    vector<int> res(A.size());

    for (int i = 0; i < A.size(); i++)
    {
        list[i].push_back(A[i]);
        list[i].push_back(B[i]);
    }

    int count = 0;
    res[0] = 0;
    

    for (auto &p : list)
    {
        cout << p.first << ": ";
        for (int idx : p.second)
        {
            cout << idx << " ";
        }
        cout << endl;
    }
}
#include <bits/stdc++.h>
using namespace std;
int processQuery(int n, int q, vector<int> nums, vector<vector<int>> query)
{
}

int main()
{

    int n, q;
    cout << "Enter length onf input : ";
    cin >> n;

    vector<int> nums;
    vector<vector<int>> query(q, vector<int>(3));

    for (int i = 0; i < n; i++)
    {
        cout << "At index " << i << " : ";
        cin >> nums[i];
    }

    cout << "Enter number of queuries";
    cin >> q;

    for (int i = 0; i < q; i++)
    {
        cout << "For Query " << i << " : ";
        for (int j = 0; j < 3; j++)
        {
            cin >> query[i][j];
        }
    }

    for (auto a : nums)
    {
        cout << a << " ";
    }
    cout << endl;
    // cout << query;
    for (int i = 0; i < q; i++)
    {
        cout << "For Query " << i << " : ";
        for (int j = 0; j < 3; j++)
        {
            cout << query[i][j];
        }
        cout << endl;
    }
}
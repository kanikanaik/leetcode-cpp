#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    cin >> n;
    cin >> m;

    vector<int> v(n);
    vector<int> d(n);
    vector<int> temp;

    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    for (int i = 0; i < n; i++)
    {
        cin >> d[i];
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            int a;

            a = v[i] - j * d[i];
            if (a >= 1)
            {
                temp.push_back(a);
            }
        }
    }

    sort(temp.begin(), temp.end(), greater<int>());
    int ans = 0;
    for (int i = 0; i < m; i++)
    {
        ans += temp[i];
    }
    for (auto a : temp)
    {
        cout << a << " ";
    }

    cout << endl
         << "Ans : " << ans;
}
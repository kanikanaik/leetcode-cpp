// 2787. Ways to Express an Integer as Sum of Powers

#include <iostream>
#include <vector>
#include <bits/stdc++.h>
#include <cmath>

using namespace std;

int numberOfWays(int n, int x)
{
    vector<int> result(n + 1, 0);
    result[0] = 1;

    for (int i = 1; pow(i, x) <= n; i++)
    {
        for (int j = n; j >= pow(i, x); j--)
        {
            int power = pow(i, x);
            result[j] = (result[j] + result[j - power] % 1000000007);
        }
    }
    return result[n];
}
int main()
{
    int n = 160;
    int x = 3;

    cout << numberOfWays(n,x) << endl;
}
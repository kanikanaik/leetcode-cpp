#include <vector>
#include <iostream>
#include <bits/stdc++.h>

using namespace std;

const int N = 1000;
int main()
{
    vector<long> x, y;

    for (int i = 0; i < N; i++)
    {
        long a, b;
        cin >> a >> b;
        x.push_back(a);
        y.push_back(b);
    }

    long long sum = 0;
    for (int i = 0; i < N; i++)
    {
        int count = 0;
        for (int j = 0; j < N; j++)
        {
            if (x[i] == y[j])
            {
                count += 1;
            }
        }
        sum += x[i] * count;
    }
    cout << "Total Distance : " << sum << endl;
}

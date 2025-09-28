#include <vector>
#include <iostream>
#include <bits/stdc++.h>

using namespace std;

const int N = 1000;
int main()
{
    int count = 0;

    vector<int> res = {1, 2, 3, 4, 1, 1, 3};

    // for (int i = 0; i < res.size(); i++)
    // {
    //     if (res[i] == 1)
    //     {
    //         count++;
    //     }
    // }
    // cout << count << endl;

    for (int i = 0; i < res.size(); i++)
    {
        if (res[i] == 1)
        {
            count += 1;
        }
    }
    cout << count << endl;
}
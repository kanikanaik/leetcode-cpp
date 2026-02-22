#include <iostream>
#include <bits/stdc++.h>
using namespace std;

bool isEven(int num)
{
    if (num % 2 == 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int countOdds(int low, int high)
{
    vector<int> res;

    for (int i = low; i <= high; i++)
    {
        if (!isEven(i))
        {
            res.push_back(i);
        }
    }
    return res.size();
}
int main()
{
    int low = 8;
    int high = 10;

    cout << countOdds(low, high) << endl;
}

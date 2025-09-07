// 1304. Find N Unique Integers Sum up to Zero

#include <iostream>
#include <vector>

using namespace std;

vector<int> sumZero(int n)
{
    vector<int> res = {};
    int sum = 0;
    for (int i = 0; i < n - 1; i++)
    {
        res.push_back(i + 1);
        sum += (i + 1);
    }
    res.push_back(sum * -1);
    return res;
}
int main()
{
    int n = 5;
    for(int i: sumZero(n)){
        cout << i << " ";
    }
}
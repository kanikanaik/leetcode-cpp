#include <vector>
#include <iostream>

using namespace std;

vector<int> getNoZeroIntegers(int n)
{
    for (int i = 1; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            if (i % 10 != 0 && j % 10 != 0 && i + j == n)
            {
                return {i, j};
            }
        }
    }
    return {-1,-1};
}

int main()
{
    int n =11;
    for (int i : getNoZeroIntegers(n))
    {
        cout << i << " ";
    }
}

// 1652. Defuse the Bomb

#include <iostream>
#include <vector>

using namespace std;

vector<int> decrypt(vector<int> &code, int k)
{
    vector<int> res(code.size(), 0);
    int N = code.size();

    if (k == 0)
    {
        return res;
    }
    for (int i = 0; i < N; i++)
    {
        if (k > 0)
        {
            for (int j = i + 1; j < i + 1 + k; j++)
            {
                res[i] += code[j % N];
            }
        }
        else
        {
            for (int j = i - 1; j > i - 1 - abs(k); j--)
            {
                res[i] += code[((j % N) + N) % N];
            }
        }
    }
    return res;
}

int main()
{
    vector<int> code = {2, 4, 9, 3};
    int k = -2;

    vector<int> res = decrypt(code, k);

    for (int i : res)
    {
        cout << i << " ";
    }
}
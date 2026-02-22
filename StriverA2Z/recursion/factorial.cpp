#include <iostream>

using namespace std;

int fact(int num)
{
    if (num == 0)
        return 1;

    return num * fact(num - 1);
}

int main()
{

    int a = 5;
    int res = fact(a);
    cout << res;
}

// 5 != 5 * 4 * 3 * 2 * 1

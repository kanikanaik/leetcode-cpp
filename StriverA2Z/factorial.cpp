#include <iostream>

using namespace std;

int fact(int num)
{
    if (num == 0 || num == 1)
        return 1;
    num = num * fact(num - 1);
}

int main()
{
    int a = 5;
    int res = fact(5);
    cout << "Factorial of " << a << " is " << res;
}

// 1!= 0;
// 4 != 4 * 3 * 2 * 1; -> 4 * 3!
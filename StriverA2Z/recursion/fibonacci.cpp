#include <bits/stdc++.h>
using namespace std;

int fib(int n)
{
    if (n <= 1)
    {
        return n;
    }
    // int last = fib(n - 1);
    // int second =
    return fib(n - 1) + fib(n - 2);
}

int main()
{
    int n = 3;
    int fiboNum = fib(n);
    cout << fiboNum;
    // int sum = 0;

    // vector<int> fibo(n);
    // fibo[0] = 0;
    // fibo[1] = 1;
    // for (int i = 2; i < n; i++)
    // {
    //     fibo[i] = fibo[i - 1] + fibo[i - 2];
    // }

    // for (auto a : fibo)
    // {
    //     cout << a << " ";
    // }
}

// 0,1,1,2,3,5,8,13

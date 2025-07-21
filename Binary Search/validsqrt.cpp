// 367. Valid Perfect Square

#include <bits/stdc++.h>

using namespace std;

bool isPerfectSquare(long long num) {
    long long left = 1;
    long long right = num;

    while (left <= right)
    {
        long long mid = (left + right) / 2;
        if (mid * mid < num)
        {
            left = mid + 1;
        }
        else if (mid * mid > num)
        {
            right = mid - 1;
        }
        else
        {
            return true;
        }
    }
    return false;
}

int main()
{
    long long num = 14;
    if(isPerfectSquare(num)){
        cout << "tr" << endl;
    }else{
        cout << "fa";
    }
}

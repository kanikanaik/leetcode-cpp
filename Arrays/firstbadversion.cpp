// 278. First Bad Version

#include <iostream>
#include <vector>
#include <bits/stdc++.h>

using namespace std;

int firstBadVersion(int n)
{
}

bool isBadVersion(int num)
{
    return true;
}

int main()
{
    // int n = 5;

    // for (int i = 1 <= n; i++){
    //     if(isBadVersion(i) == true){
    //         return i;
    //     }
    // }
    int n = 5;
    int left = 1;
    int right = n;

    while (left <= right)
    {
        int mid = (left + right) / 2;

        if (isBadVersion(mid))
        {
            right = mid;
        }
        else
        {
            left = mid + 1;
        }
    }
    return right;
}
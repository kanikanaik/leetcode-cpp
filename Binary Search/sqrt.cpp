// 69. Sqrt(x)

#include <bits/stdc++.h>

using namespace std;

int mySqrt(int x)
{
    int left = 1;
    int right = x;

    while(left <= right){
        int mid = (left + right) / 2;
        int squared = mid * mid; 
        
        if(squared == x){
            return mid;
        }
        if(squared < x){
            left = mid + 1;
        }
        else{
            right = mid - 1;
        }
    }
     return right;
}

int main()
{

    int x = 8;

    int result = sqrt(x);
    cout << result << endl;
}
#include <bits/stdc++.h>

using namespace std;

// bool isPalindrome(string s)
// {
//     int n = s.length();
//     for (int i = 0; i <= n / 2; i++)
//     {
//         if (s[i] != s[n - i - 1])
//         {
//             return false;
//         }
//     }
//     return true;
// }

bool isPalindrome(int i, string s)
{
    int n = s.length();
    if (i >= n / 2)
        return true;
    if (s[i] != s[n - i - 1])
    {
        return false;
    }
    return isPalindrome(i + 1, s);
}

int main()
{
    string s = "123223221";
    if (isPalindrome(0, s))
    {
        cout << "is palindrom";
    }
    else
    {
        cout << "not a palindorme";
    }
    // cout << isPalindrome(s);
    // cout << s[1];
}
#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int countBinarySubstrings(string s)
{
    vector<string> subs;

    return 0;
}

vector<string> evenLengthSubstrings(string s)
{
    int n = s.length();
    vector<string> subs;

    for (int i = 0; i < n; i++)
    {
        for (int len = 2; len <= n - i; len += 2) // start from 2 and increase by 2
        {
            subs.push_back(s.substr(i, len));
        }
    }

    return subs;
}

// int main()
// {
//     string s = "00110011";
//     // int res = countBinarySubstrings(s);
//     // cout << res;

//     int n = s.length();
//     vector<string> subs = evenLengthSubstrings(s);

//     // for (int i = 0; i < n; i++)
//     //     for (int len = 1; len <= n - i; len++)
//     //         subs.push_back(s.substr(i, len));

//     // for (auto a : subs)
//     // {
//     //     cout << a << " ";
//     // }

//     for (int i = 0; i < subs.size(); i++)
//     {

//         // cout << subs[i] << " ";
//         int left = 0;
//         int right = subs[i].length() - 1;

//         bool isSame = true;

//         while (left < right)
//         {
//             if (subs[i][left] != subs[i][right])
//             {
//                 // continue;
//                 isSame = false;
//                 break;
//             }
//             left += 1;
//             right -= 1;
//         }
//         if (!isSame)
//             subs.erase(subs.begin() + i);
//         else
//             i++;
//     }

//     for (auto i : subs)
//         cout << i << " ";
//     return 0;
// }

int main()
{
    string s = "00110011";

    vector<string> subs = evenLengthSubstrings(s);

    for (int i = 0; i < subs.size();)
    {
        int left = 0;
        int right = subs[i].length() - 1;
        bool isPalindrome = true;

        while (left < right)
        {
            if (subs[i][left] != subs[i][right])
            {
                isPalindrome = false;
                break;
            }
            left += 1;
            right -= 1;
        }

        if (!isPalindrome)
            subs.erase(subs.begin() + i); // remove non-palindrome
        else
            i++; // only increment if not erased
    }

    for (auto i : subs)
        cout << i << " ";

    return 0;
}

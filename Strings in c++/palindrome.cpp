// Palindrome
#include <iostream>
#include <string>
#include <bits/stdc++.h>

using namespace std;
bool isPalindrome(string s)
{
    string result = "";
    for (char c : s)
    {
        if (isalnum(c))
        {
            result += tolower(c);
        }
    }

    string rvs = result; // make a copy
    reverse(rvs.begin(), rvs.end());

    if (result == rvs)
    {
        return true;
    }
    else
    {
        return false;
    }
}
int main()
{
    string s = "A man, a plan, a canal: Panama";
    isPalindrome(s);

}

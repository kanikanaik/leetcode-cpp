#include <bits/stdc++.h>

using namespace std;

bool isUnique(string s)
{
    for (int i = 0; i < s.length(); i++)
    {
        for (int j = i + 1; j < s.length(); j++)
        {
            if (s[i] == s[j])
            {
                return false;
                break;
                // cout << s[i] << " , " << s[j] << endl;
            }
        }
    }
    return true;
}
int main()
{
    string s = "uniqe";
    cout << isUnique(s);
}
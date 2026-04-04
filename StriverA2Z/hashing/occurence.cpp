#include <bits/stdc++.h>

using namespace std;
int main()
{

    string s = "abcdefakjdsfads";
    int hash[26] = {0};

    for (int i = 0; i < s.length(); i++)
    {
        char c = s[i];
        int num = (int)c - 97;
        hash[num] += 1;
    }

    // Print occurences
    for (int i = 0; i < s.length(); i++)
    {
        // cout << (int)'a' << endl;
        cout << s[i] << " : " << hash[((int)s[i]) - 97] << endl;
    }
}
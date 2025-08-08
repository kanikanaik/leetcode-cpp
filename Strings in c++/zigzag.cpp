#include <iostream>
#include <string>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s = "PAYPALISHIRING";
    int numRows = 3;
    
    string res = "";
    int i = 0;
    while (res.size() < s.size())
    {
        res = res + s[i];
        i += numRows + 1;
    }

    cout << res << endl;
}
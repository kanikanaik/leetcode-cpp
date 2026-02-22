#include <iostream>
#include <bits/stdc++.h>
#include <string>

using namespace std;
int main()
{
    // cout << "Hello World";
    int a = 123432;

    // Brute Force Approach
    string a_str = to_string(a);
    cout << a_str.size() << endl;

    // Optimal Approach
    int count = 0;
    while (a > 0)
    {
        count += 1;
        a = a / 10;
    }
    cout << count;
}

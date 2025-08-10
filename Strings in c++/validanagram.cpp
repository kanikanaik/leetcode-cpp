// 242. Valid Anagram

#include <iostream>
#include <string>
#include <bits/stdc++.h>
#include <algorithm> // Required for std::min_element

using namespace std;

bool isAnagram(string s, string t)
{
    sort(s.begin(), s.end());
    sort(t.begin(), t.end());

    return s==t;
}
int main()
{
    string s = "anagram", t = "nagaram";
    cout << isAnagram(s,t);
}
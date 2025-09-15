#include <iostream>
#include <vector>
#include <string>
#include <unordered_map>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    string text = "hello world", brokenLetters = "ad";
    unordered_map<int, string> words;
    
    int i = 0;
    for (char c : text)
    {
        if (c == ' ')
        {
            i++;
        }
        words[i] += c;
    }

    for (auto j : words)
    {
        cout << j.first << " : " << j.second << endl;
    }
}
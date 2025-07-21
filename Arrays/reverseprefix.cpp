// 2000. Reverse Prefix of Word

#include <bits/stdc++.h>
using namespace std;

string reversePrefix(string word, char ch)
{
    int idx = word.find(ch);

    if (idx != -1)
    {
        reverse(word.begin(), word.begin() + idx + 1);
    }
    return word;
}

int main()
{
    string word = "abcdefd";
    char ch = 'd';

    string result = reversePrefix(word,ch);
    cout << result << endl;
}
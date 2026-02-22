#include <iostream>
#include <bits/stdc++.h>
#include <cctype>
#include <string>

using namespace std;

bool isValidCode(const string &code)
{
    if (code.empty())
        return false;

    for (char c : code)
    {
        if (!(isalnum(c) || c == '_'))
        {
            return false;
        }
    }
    return true;
}
vector<string> validateCoupons(vector<string> &code, vector<string> &businessLine, vector<bool> &isActive)
{
    vector<string> res = {};
    // if (code.empty())
    //     return false;
    for (int i = 0; i < code.size(); i++)
    {

        if (!(code[i].empty()) && isActive[i] && isValidCode(code[i]) && (businessLine[i] == "electronics" || businessLine[i] == "grocery" || businessLine[i] == "pharmacy" || businessLine[i] == "restaurant"))
        {
            res.push_back(code[i]);
        }
    }
    sort(res.begin(), res.end());
    return res;
}
int main()
{
    vector<string> code = {"SAVE20", "", "PHARMA5", "SAVE@20"}, businessLine = {"restaurant", "grocery", "pharmacy", "restaurant"};
    vector<bool> isActive = {true, true, true, true};

    vector<string> res = validateCoupons(code, businessLine, isActive);

    for (auto &c : res)
        cout
            << c << endl;
}

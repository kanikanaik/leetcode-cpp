// Longest Common Prefix

#include <iostream>
#include <vector>
using namespace std;

// string longestCommonPrefix(vector<string>& strs) {

//     }
int main()
{

    vector<string> strs = {"flower", "flow", "flight"};
    string common = "";
    string smallest = "";
    int mini = 10000;

    for (int i = 0; i < strs.size(); i++)
    {
        if (strs[i].size() < mini)
        {
            mini = strs[i].size();
            smallest = strs[i];
        }
    }

    // flow strs[i]
    for (int i = 0; i < smallest.size(); i++)
    {
        for (int j = i + 1; j < strs[i].size() - smallest.size(); j++)
        {
            if (smallest[i] == strs[i][j])
            {
                common += smallest[i];
            }
        }
    }
    cout << "Common string : " << common << endl;
}

// flower
// flow
// float
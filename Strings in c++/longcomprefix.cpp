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
    
    for (int j = 0; j < strs[0].size(); j++)
    {
        char c = strs[0][j];
        for (int i = 1; i < strs.size(); i++)
        {
            if (j >= strs[i].size() || strs[i][j] != c)
            {
                cout << "Common Prefix: " << common << endl;
                return 0;
            }
        }
        common += c;
    }

    cout << "Common Prefix: " << common << endl;

    // cout << strs[1][0] << endl;
}

// flower
// flow
// float
#include <iostream>
#include <string>
#include <bits/stdc++.h>

using namespace std;
vector<vector<string>> groupAnagrams(vector<string> &strs)
{
    unordered_map<string, vector<string>> res;
    vector<vector<string>> result = {}; 
    for(string str : strs){
        string sor_s = str;
        sort(sor_s.begin(),sor_s.end());
        res[sor_s].push_back(str);
    }

    for(auto& pair: res){
        result.push_back(pair.second);
    }
    return result;
}

int main()
{
    vector<string> strs = {"eat", "tea", "tan", "ate", "nat", "bat"};
    vector<vector<string>> res = groupAnagrams(strs);
    // cout << result;
    for(int i = 0;i< res.size();i++){
        for(int j=0;j < res[i].size();j++){
            cout << res[i][j] << endl;
        }
    }

}

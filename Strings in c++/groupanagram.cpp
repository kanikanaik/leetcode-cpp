// 49. Group Anagrams

#include <iostream>
#include <string>
#include <bits/stdc++.h>

using namespace std;
vector<vector<string>> groupAnagrams(vector<string> &strs)
{
     unordered_map<string, vector<string>> res;

    for(string s: strs){
        string sort_s = s;
        sort(sort_s.begin(),sort_s.end());
        res[sort_s].push_back(s);
    }
    
    vector<vector<string>> result;
        for (auto& pair : res) {
            result.push_back(pair.second);
        }
        return result;
}

int main()
{
    //ate,ate,ate, ant,ant, abt
    vector<string> strs = {"eat", "tea", "tan", "ate", "nat", "bat"};
   
}
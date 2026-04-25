class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string> &strs)
{
    vector<string> words;
    vector<vector<string>> res;
    vector<bool> visited(strs.size(), false);

    for (int i = 0; i < strs.size(); i++)
    {
        string s;
        s = strs[i];
        sort(s.begin(), s.end());
        // cout << s << " ";
        words.push_back(s);
    }

    for (int i = 0; i < strs.size(); i++)
    {
        if (visited[i])
            continue;

        vector<string> temp;
        temp.push_back(strs[i]);
        visited[i] = true;
        for (int j = i +1; j < strs.size(); j++)
        {
            if (words[i] == words[j])
            {
                temp.push_back(strs[j]);
                visited[j] = true;
            }
        }
        res.push_back(temp);
    }
    return res;
}

    //  vector<vector<string>> groupAnagrams(vector<string>& strs) {
    //     vector<string> words;
    //     for (int i = 0; i < strs.size(); i++) {
    //         string s;
    //         s = strs[i];
    //         sort(s.begin(), s.end());
    //         words.append(s);
    //     }

        
    // }
};
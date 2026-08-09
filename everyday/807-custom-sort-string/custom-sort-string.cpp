class Solution {
public:
   string customSortString(string order, string s)
{
    unordered_map<char, int> seq;

    for (int i = 0; i < order.length(); i++)
    {
        seq[order[i]] = i + 1;
    }
    // cout << s;
    // cout << seq['a'];

    string result = "";
    for (int i = 0; i < order.length(); i++)
    {
        char c = order[i];
        if (s.find(c) != string::npos)
        {
            for (char x : s)
            {
                if (x == c)
                    result += c;
            }
        }
    }

    for (char c : s)
    {
        if (seq.find(c) == seq.end())
        {
            result += c;
        }
    }

    return result;
}
};

// bcafg
// abcd

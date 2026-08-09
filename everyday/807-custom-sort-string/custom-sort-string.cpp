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
    sort(s.begin(), s.end(), [&](char a, char b)
         {
        int priorityA = seq.count(a) ? seq[a] : order.length() + 1;
        int priorityB = seq.count(b) ? seq[b] : order.length() + 1;

        return priorityA < priorityB; });
    return s;
}
};

// bcafg
// abcd

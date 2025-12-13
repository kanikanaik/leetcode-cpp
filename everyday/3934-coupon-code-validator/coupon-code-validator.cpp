class Solution {
public:
    bool isValidCode(const string &code) {
    if (code.empty()) return false;
    for (char c : code) {
        if (!(isalnum(c) || c == '_'))
            return false;
    }
    return true;
}

vector<string> validateCoupons(vector<string> &code,
                               vector<string> &businessLine,
                               vector<bool> &isActive)
{
    // Priority order
    unordered_map<string, int> priority = {
        {"electronics", 0},
        {"grocery", 1},
        {"pharmacy", 2},
        {"restaurant", 3}
    };

    vector<pair<string, string>> valid; // {businessLine, code}

    for (int i = 0; i < code.size(); i++) {
        if (isActive[i] &&
            isValidCode(code[i]) &&
            priority.count(businessLine[i])) {
            valid.push_back({businessLine[i], code[i]});
        }
    }

    sort(valid.begin(), valid.end(), [&](auto &a, auto &b) {
        if (priority[a.first] != priority[b.first])
            return priority[a.first] < priority[b.first];
        return a.second < b.second; // lexicographical code sort
    });

    vector<string> result;
    for (auto &p : valid)
        result.push_back(p.second);

    return result;
}
};

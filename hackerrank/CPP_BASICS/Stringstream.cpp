#include <sstream>
#include <vector>
#include <iostream>
using namespace std;

vector<int> parseInts(string str)
{
    vector<int> nums;
    stringstream ss(str);
    int num;
    char ch;

    while (ss >> num)
    {
        nums.push_back(num);
        ss >> ch; // skip comma
    }

    return nums;
};
int main()
{
    string str;
    cin >> str;
    vector<int> integers = parseInts(str);
    for (int i = 0; i < integers.size(); i++)
    {
        cout << integers[i] << "\n";
    }

    return 0;
}

#include <iostream>
#include <vector>
#include <string>

using namespace std;

string largestGoodInteger(string num)
{
    vector<string> nums = {"999", "888", "777", "666", "555", "444", "333", "222", "111", "000"};
    for (string n : nums)
    {
        if (num.find(n) != string::npos)
        {
            return n;
        }
    }
    return "";
}
int main()
{
    string num = "6777133339";
    cout << largestGoodInteger(num) << endl;
}
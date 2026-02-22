#include <iostream>
using namespace std;

int names(int num)
{
    if (num == 0)
        return 1;
    cout << "Kanika" << " ";
    names(num - 1);
}
int main()
{
    int n = 5;
    string s = "Kanika";
    names(n);

    // for (int i = 0; i < n; i++)
    // {
    //     cout << s << " ";
    // }
}
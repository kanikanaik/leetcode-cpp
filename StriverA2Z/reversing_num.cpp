#include <iostream>

using namespace std;

int main()
{
    int a = 124345;
    int revN = 0;
    int lastdigit;

    while (a > 0)
    {
        lastdigit = a % 10;
        revN = (revN * 10) + lastdigit;
        a = a / 10;
    }
    cout << revN;
}
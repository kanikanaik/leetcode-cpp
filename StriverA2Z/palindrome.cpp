#include <iostream>

using namespace std;

int main()
{
    int a = 13331;
    int org = a;
    int revN = 0;
    int lastdigit;

    while (a > 0)
    {
        lastdigit = a % 10;
        revN = (revN * 10) + lastdigit;
        a = a / 10;
    }

    cout << revN;

    if (org == revN)
    {
        cout << "It is a palindrome ";
    }
    else
    {
        cout << "Not a palindrome ";
    }

    // cout << revN
}
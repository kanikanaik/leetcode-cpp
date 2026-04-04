// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     int w_no;
//     cout << "Enter no of inputs";
//     cin >> w_no;

//     if ((w_no / 2) % 2 == 0)
//     {
//         cout << "TRUE";
//     }
// }

#include <iostream>
using namespace std;

int main()
{
    int num;
    cin >> num;

    if (num == 2)
    {
        cout << "NO";
    }
    else if (num % 2 == 0)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
}
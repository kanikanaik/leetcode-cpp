#include <iostream>

using namespace std;
// int x = 1;
int hey(int num)
{

    if (num <= 0)
        return 1;
    hey(num - 1);
    cout << num << " ";
}

int main()
{
    int a = 7;
    hey(a);
    cout << endl;
}
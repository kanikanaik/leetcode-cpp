// 3516. Find Closest Person

#include <iostream>
#include <vector>

using namespace std;

int findClosest(int x, int y, int z)
{
    if (abs(z - x) > abs(z - y))
    {
        return 2;
    }
    else if (abs(z - x) == abs(z - y))
    {
        return 0;
    }
    else
    {
        return 1;
    }
}

int main()
{
    int x = 1, y = 5, z = 3;
}
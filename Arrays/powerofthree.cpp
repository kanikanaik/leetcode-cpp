// 326. Power of Three

#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

 bool isPowerOfThree(int n) {
        if (n <= 0) return false;
        while (n % 3 == 0) {
            n /= 3;
        }
        return n == 1;

    }

int main()
{
    int n = 9;
    cout << isPowerOfThree(n) << endl;
}
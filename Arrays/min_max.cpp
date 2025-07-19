// Minimum and Maximum Element in Aray
#include <iostream>
#include <limits.h>
using namespace std;

int main()
{
    int mini = INT_MAX;
    int max = INT_MIN;

    int size = 6;
    int arr[] = {100, -4, 3, 20, 6, 5};

    for (int i = 0; i < size; i++)
    {
        if (arr[i] < mini)
        {
            mini = arr[i];
        }
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }
    cout << "Maximum Number in Array is : " << max << endl;
    cout << "Minimum Number in Array is : " << mini << endl;
}

// if 100 > -1000:
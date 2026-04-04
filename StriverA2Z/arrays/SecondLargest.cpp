#include <bits/stdc++.h>

using namespace std;

int secondLargest(vector<int> arr, int n)
{

    // sort(arr.begin(), arr.end());
    // int largest = arr[n - 1];
    // int secondLarge;
    // for (int i = n - 2; i >= 0; i--)
    // {
    //     if (arr[i] != largest)
    //     {
    //         secondLarge = arr[i];
    //         break;
    //     }
    // }
    // return secondLarge;
    int largest = arr[0];
    int sLargest = -1;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > sLargest && arr[i] != largest)
        {
            sLargest = arr[i];
        }
    }
    return sLargest;
}

int main()
{
    int n = 5;
    vector<int> arr = {8, 10, 5, 7, 9};

    cout << "Second Largest Element is : " << secondLargest(arr, n) << endl;
}
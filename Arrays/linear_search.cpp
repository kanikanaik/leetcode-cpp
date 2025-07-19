#include <iostream>
using namespace std;

int linearSearch(int arr[], int size, int target)
{
    for (int i = 0; i < size; i++){
        if (arr[i] == target)
        {
            return i;
        }
    }
    // cout << -1 << endl;
    return -1;
}


int main()
{
    int size = 7;
    int arr[size] = {4, 2, 7, 8, 1, 2, 5};
    int target = 100;

    cout << linearSearch(arr, size, target) << endl;
}
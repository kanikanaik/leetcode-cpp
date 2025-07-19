#include <iostream>
#include <vector>

using namespace std;
 

int main()
{

    // reversing using one array - memory efficent
    //   int myArray[] = {1, 4, 3, 2, 6, 5};

    // int length = sizeof(myArray) / sizeof(myArray[0]);
    // for (int i = 0; i < length / 2; i++)
    // {
    //     int temp = myArray[i];
    //     myArray[i] = myArray[length - 1 - i];
    //     myArray[length - 1 - i] = temp;
    // }

    // reversing using two vectors

    vector<int> myArray = {1, 4, 3, 2, 6, 5};
    vector<int> myArray2;

    for (int i = myArray.size() -1; i >=0 ; i--)
    {
        myArray2.push_back(myArray[i]);
    }

    for(int i = 0;i< myArray2.size();i++){
        cout << myArray2[i] << endl;

    }
}
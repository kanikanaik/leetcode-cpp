#include <iostream>
using namespace std;

void SqaureInt(int number)
{
    cout << number * number << endl;
}

int main()
{
    int num;
    cout << "Enter a number to square it : ";
    cin >> num;

    SqaureInt(num);
}
// 3000. Maximum Area of Longest Diagonal Rectangle

#include <iostream>
#include <vector>
#include <cmath>
#include <limits.h>

using namespace std;

int areaOfMaxDiagonal(vector<vector<int>> &dimensions)
{
    vector<int> answer = {};
    double max = INT_MIN;
    int max_idx = -1;

    for (int i = 0; i < dimensions.size(); i++)
    {
        int sum = 0;
        for (int j = 0; j < dimensions[i].size(); j++)
        {
            sum += (dimensions[i][j] * dimensions[i][j]);
            // cout << sum << " ";
        }
        answer.push_back(sum);
        // i want index of the max diagonal
        if (sqrt(answer[i]) > max)
        {
            max = sqrt(answer[i]);
            max_idx = i;
        }
    }
    return (dimensions[max_idx][0] * dimensions[max_idx][1]);
}

int main()
{
    vector<vector<int>> dimensions = {{10,3}, {5, 9},{8,3}};
    int area = areaOfMaxDiagonal(dimensions);
    cout << area;
}

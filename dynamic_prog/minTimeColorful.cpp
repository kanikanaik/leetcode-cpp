#include <iostream>
#include <vector>
#include <string>
using namespace std;

int minCost(string colors, vector<int> &neededTime)
{
    int totalTime = 0;

    for (int i = 1; i < colors.size(); i++)
    {
        if (colors[i] == colors[i - 1])
        {
            totalTime += min(neededTime[i], neededTime[i - 1]);
            neededTime[i] = max(neededTime[i], neededTime[i - 1]);
        }
    }

    return totalTime;
}

int main()
{
    string colors = "abaac";
    vector<int> neededTime = {1, 2, 3, 4, 5};

    cout << minCost(colors, neededTime) << endl;
}

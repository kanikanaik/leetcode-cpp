// 121. Best Time to Buy and Sell Stock

#include <iostream>
#include <vector>
#include <limits.h>

using namespace std;

int maxProfit(vector<int> &prices)
{
    int mini = INT_MAX;
    int max = INT_MIN;

    for (int i = 0; i < prices.size(); i++)
    {
        if (prices[i] < mini)
        {
            mini = i;
        }
        // if (prices[i] > max)
        // {
        //     max = prices[i];
        // }
    }

    // cout << "MAx: " << max << endl;
    cout << "Min: " << prices[mini[]] << endl;

    // cout << "Profit: "<< max - mini << endl;
    return 0;
 
}
int main()
{
    vector<int> prices = {7, 1, 5, 3, 6, 4};
    cout << maxProfit(prices) << endl;
}
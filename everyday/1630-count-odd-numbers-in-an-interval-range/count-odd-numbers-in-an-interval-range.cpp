class Solution {
public:
    int countOdds(int low, int high)
{
    // vector<int> res;

    // for (int i = low; i <= high; i++)
    // {
    //     if (!isEven(i))
    //     {
    //         res.push_back(i);
    //     }
    // }
    // return res.size();
    return (high + 1) / 2 - (low / 2);
}
};
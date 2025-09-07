#include <iostream>
#include <vector>

using namespace std;

// long long minOperations(vector<vector<int>> &queries)
// {
// }

int main()
{
    vector<vector<int>> queries = {{1,2},{2,4}};
    vector<int> nums = {};

    int i = 0;
    while(i < queries.size()){

        for(int l = queries[i][0]; l <= queries[i][1]; l++){
            nums.push_back(l);
            
        }
        // you have to choose non zero a,b and floor(a / 4)
        cout << endl;

        i++;
    }

    // cout << queries.size();
    

}
// 1351. Count Negative Numbers in a Sorted Matrix

#include <iostream>
#include <bits/stdc++.h>
#include <vector>

using namespace std;

int countNegatives(vector<vector<int>>& grid) {
    int count = 0;
    for(int i =0; i < grid.size();i++){
        for(int j =0; j < grid[i].size();j++){
            if(grid[i][j] < 0){
                count += 1;
            }
        }
    }
    return count;
}

int main(){
    vector<vector<int>> grid = {{3,2},{1,0}};
    int negatives = countNegatives(grid);
    cout << negatives << endl;
}
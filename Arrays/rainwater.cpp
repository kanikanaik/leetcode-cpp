#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    vector<int> height = {0,1,0,2,1,0,1,3,2,1,2,1};

    int maxHeight = *max_element(height.begin(), height.end());
    vector<vector<int>> matrix(maxHeight, vector<int>(height.size(), 0));

    for (int col = 0; col < height.size(); col++) {
        for (int row = maxHeight - 1; row >= maxHeight - height[col]; row--) {
            matrix[row][col] = 1;
        }
    }

    // Print the matrix.
    for (const auto& row : matrix) {
        for (int val : row) {
            cout << val << " ";
        }
        cout << endl;
    }
}

class Solution {
public:
    // vector<vector<int>> generate(int numRows) {

    // }

    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> mat;
        for (int row = 0; row < numRows; row++) {
            vector<int> arr;
            for (int i = 0; i <= row; i++) {
                if (row == i || i == 0)
                    arr.push_back(1);
                else
                    arr.push_back(mat[row - 1][i - 1] + mat[row - 1][i]);
            }
            mat.push_back(arr);
        }
        return mat;
    }
};
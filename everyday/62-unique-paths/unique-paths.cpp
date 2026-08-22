// class Solution {
// public:
//     int uniquePaths(int m, int n) {
//         vector<vector<int>> grid(m, vector<int>(n));

//         for (int i = 0; i < m; i++) {
//             grid[i][0] = 1;
//         }

//         for (int j = 0; j < n; j++) {
//             grid[0][j] = 1;
//         }

//         for (int i = 1; i < m; i++) {
//             for (int j = 1; j < n; j++) {
//                 grid[i][j] = grid[i - 1][j] + grid[i][j - 1];
//                 // grid[1][1] = grid[0][1] + grid[1][0]
//             }
//         }
//         return grid[m - 1][n - 1];
//     }
// }
// ;
class Solution {
public:
    int dp[101][101]{};
    int uniquePaths(int m, int n, int i = 0, int j = 0) {
        if(i >= m || j >= n) return 0;
        if(i == m-1 && j == n-1) return 1;
        if(dp[i][j]) return dp[i][j];
        return dp[i][j] = uniquePaths(m, n, i+1, j) + uniquePaths(m, n, i, j+1);
    }
};
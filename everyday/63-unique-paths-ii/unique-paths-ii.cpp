class Solution {
public:
    int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {

        int m = obstacleGrid.size();
        int n = obstacleGrid[0].size();

        if (obstacleGrid[0][0] == 1) {
            return 0;
        }

        vector<vector<int>> grid(m, vector<int>(n, 0));

        for (int i = 0; i < m; i++) {

            for (int j = 0; j < n; j++) {

                // Obstacle
                if (obstacleGrid[i][j] == 1) {
                    grid[i][j] = 0;
                    continue;
                }

                // Starting point
                if (i == 0 && j == 0) {
                    grid[i][j] = 1;
                    continue;
                }

                // From top
                if (i > 0) {
                    grid[i][j] += grid[i - 1][j];
                }

                // From left
                if (j > 0) {
                    grid[i][j] += grid[i][j - 1];
                }
            }
        }

        return grid[m - 1][n - 1];
    }
};
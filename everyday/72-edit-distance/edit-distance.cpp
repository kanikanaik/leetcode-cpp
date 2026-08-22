class Solution {
public:
    int minDistance(string word1, string word2) {
        int m = word1.length();
        int n = word2.length();

        vector<vector<int>> grid(m + 1, vector<int>(n + 1));
        for (int i = 0; i <= m; i++) {
            grid[i][0] = i;
        }
        for (int i = 0; i <= n; i++) {
            grid[0][i] = i;
        }

        for (int i = 1; i <= m; i++) {
            for (int j = 1; j <= n; j++) {
                if (word1[i - 1] == word2[j - 1]) {
                    grid[i][j] = grid[i - 1][j - 1];
                } else {
                    grid[i][j] = 1 + min({
                                         grid[i][j - 1],    // Insert
                                         grid[i - 1][j],    // Delete
                                         grid[i - 1][j - 1] // Replace
                                     });
                }
            }
        }
        return grid[m][n];
    }
};
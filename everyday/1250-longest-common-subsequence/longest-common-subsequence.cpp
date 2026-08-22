class Solution {
public:
    int longestCommonSubsequence(string text1, string text2) {
        int m = text1.length();
        int n = text2.length();

        vector<vector<int>>grid(m +1, vector<int>(n + 1,0));

        for(int i = 1; i <= m; i++){
            for(int j = 1; j <=n; j++){
                if(text1[i -1] == text2[j -1]){
                    grid[i][j] = grid[i -1][j -1] + 1;
                }else{
                    grid[i][j] = max(grid[i][j -1], grid[i -1][j]);
                }
            }
        }
        return grid[m][n];
    }
};
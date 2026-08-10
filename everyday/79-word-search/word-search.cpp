class Solution {
public:
    bool dfs(int idx, int r, int c, vector<vector<char>>& board, string word) {
        int row = board.size();
        int col = board[0].size();

        if (idx == word.length()) {
            return true;
        }
        if (r < 0 || c < 0 || r >= row || c >= col ||
            word[idx] != board[r][c]) {
            return false;
        }
        char temp = board[r][c];
        board[r][c] = '#';
        bool result = (dfs(idx + 1, r + 1, c, board, word) ||
                       dfs(idx + 1, r - 1, c, board, word) ||
                       dfs(idx + 1, r, c + 1, board, word) ||
                       dfs(idx + 1, r, c - 1, board, word));
        board[r][c] = temp;
        return result;
    }

    bool exist(vector<vector<char>>& board, string word) {
        for (int r = 0; r < board.size(); r++) {
            for (int c = 0; c < board[r].size(); c++) {
                if (dfs(0, r, c, board, word)) {
                    return true;
                }
            }
        }
        return false;
    }
};

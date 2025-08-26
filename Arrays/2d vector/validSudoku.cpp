#include <iostream>
#include <bits/stdc++.h>
#include <vector>
#include <set>

using namespace std;

//  bool isValidSudoku(vector<vector<char>>& board) {

//     }

int main()
{
    vector<vector<char>> board = {
        {'5', '3', '.', '.', '7', '.', '.', '.', '.'},
        {'6', '.', '.', '1', '9', '5', '.', '.', '.'},
        {'.', '9', '8', '.', '.', '.', '.', '6', '.'},
        {'8', '.', '.', '.', '6', '.', '.', '.', '3'},
        {'4', '.', '.', '8', '.', '3', '.', '.', '1'},
        {'7', '.', '.', '.', '2', '.', '.', '.', '6'},
        {'.', '6', '.', '.', '.', '.', '2', '8', '.'},
        {'.', '.', '.', '4', '1', '9', '.', '.', '5'},
        {'.', '.', '.', '.', '8', '.', '.', '7', '9'}};

    vector<set<char>> boardSets;
    for (auto &row : board)
    {
        set<char> s;
        for (char c : row)
        {
            if (c != '.') // ✅ skip dots
                s.insert(c);
        }
        boardSets.push_back(s);
    }

    for (int i = 0; i < board.size(); i++)
    {
        for (int j = 0; j < board[i].size(); j++)
        {
            cout << board[j][i] << " ";
            // if (board[i].find(board[i][j]))
        }
        cout << endl;
    }
}

class Solution {
    private:
   
    bool isSafe(int row, int col, unordered_map<int, bool> &rowMp,
                unordered_map<int, bool> &leftUpMp,
                unordered_map<int, bool> &leftDownMp, int n) {

        if (rowMp[row] || leftUpMp[row + col] || leftDownMp[n - 1 + col - row]) return false;
        return true;
    }

    void solve(unordered_map<int, bool> &rowMp,
               unordered_map<int, bool> &leftUpMp,
               unordered_map<int, bool> &leftDownMp,
               vector<string> &board, vector<vector<string>>& ans, int n, int col) {
        // base case
        if (col == n) {
            ans.push_back(board);
            return;
        }

        for (int row = 0; row < n; row++) {
            if (isSafe(row, col, rowMp, leftUpMp, leftDownMp, n)) {
                board[row][col] = 'Q';
                rowMp[row] = true;
                leftUpMp[row + col] = true;
                leftDownMp[n - 1 + col - row] = true;
                solve(rowMp, leftUpMp, leftDownMp, board, ans, n, col + 1);
                board[row][col] = '.';
                rowMp[row] = false;
                leftUpMp[row + col] = false;
                leftDownMp[n - 1 + col - row] = false;
            }
        }
    }
public:
    vector<vector<string>> solveNQueens(int n) {
        vector<string> board(n, string(n,'.'));
        vector<vector<string>> ans;
        unordered_map<int, bool> rowMp;
        unordered_map<int, bool> leftUpMp;
        unordered_map<int, bool> leftDownMp;

        solve(rowMp, leftUpMp, leftDownMp, board, ans, n, 0);

        return ans;
    }
};
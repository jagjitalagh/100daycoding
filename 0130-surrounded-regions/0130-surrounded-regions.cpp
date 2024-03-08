class Solution {
    int n, m;

private:
    void helper(int i, int j, vector<vector<char>>& v, vector<vector<char>>& board) {
        v[i][j] = 'O';
        if (i > 0 && board[i - 1][j] == 'O' && v[i - 1][j] == 'Y') helper(i - 1, j, v, board);
        if (i < n - 1 && board[i + 1][j] == 'O' && v[i + 1][j] == 'Y') helper(i + 1, j, v, board);
        if (j > 0 && board[i][j - 1] == 'O' && v[i][j - 1] == 'Y') helper(i, j - 1, v, board);
        if (j < m - 1 && board[i][j + 1] == 'O' && v[i][j + 1] == 'Y') helper(i, j + 1, v, board);
    }

public:
    void solve(vector<vector<char>>& board) {
        n = board.size();
        m = board[0].size();
        vector<vector<char>> v(n, vector<char>(m, 'Y'));
        for (int i = 0; i < n; i++) {
            if(board[i][0]=='O' && v[i][0] == 'Y') helper(i,0,v,board); 
            if(board[i][m-1]=='O' && v[i][m-1] == 'Y') helper(i,m-1,v,board); 
        }
        for (int j = 1; j < m-1; j++) {
            if(board[0][j]=='O' && v[0][j] == 'Y') helper(0,j,v,board);
            if(board[n-1][j]=='O' && v[n-1][j] == 'Y') helper(n-1,j,v,board);
        }
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (board[i][j] == 'O' && v[i][j] == 'O') {
                    board[i][j] = 'O';  
                } else {
                    board[i][j] = 'X';  
                }
            }
        }
    }
};
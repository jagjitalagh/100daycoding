class Solution {
public:
    
    int path(vector<vector<int>>& dp, vector<vector<int>>& grid, int x, int y){
        if(x<0 || y<0 || grid[x][y]==1) return 0;
        if(x==0 && y==0) return 1;
        if(dp[x][y]!=-1) return dp[x][y];
        return dp[x][y] = path(dp, grid, x-1, y)+path(dp, grid, x, y-1);
    }
    int uniquePathsWithObstacles(vector<vector<int>>& grid) {
        vector<vector<int>> dp(grid.size()+1, vector<int> (grid[0].size()+1, -1));
        return path(dp, grid, grid.size()-1, grid[0].size()-1);
    }
};
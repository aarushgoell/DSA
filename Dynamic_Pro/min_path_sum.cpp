int returnPathSum(int i, int j, int row, int col,vector<vector<int>>& grid,vector<vector<int>>& dp) {
   
    
    if (i >= row || j >= col) {
        return INT_MAX;  
    }

    
    if (i == row - 1 && j == col - 1) {
        return grid[i][j];
    }

    if(dp[i][j] != -1){
        return dp[i][j];
    }


    int firstpath = returnPathSum(i, j + 1, row, col, grid,dp);
    int secondpath = returnPathSum(i + 1, j, row, col, grid,dp);

    dp[i][j] = grid[i][j] + min(firstpath, secondpath);

    return  dp[i][j];
}
    int minPathSum(vector<vector<int>>& grid) {
         
         int row = grid.size();
         int col = grid[0].size();

        vector<vector<int>> dp(row,vector<int> (col,-1));
        return returnPathSum(0, 0, row,col,grid,dp);
    }
};

// Using tabulation 

int minPathSum(vector<vector<int>>& grid) {
         
         int row = grid.size();
         int col = grid[0].size();

        vector<vector<int>> dp(row,vector<int> (col,0));
        
        for(int i = row-1;i>=0;i--){
            for(int j = col - 1 ;j>=0;j--){
                if(i == row - 1 && j == col-1){
                    dp[i][j] = grid[i][j];
                }
                else if(i == row-1){
                    dp[i][j] = grid[i][j] + dp[i][j+1];
                }
                else if(j == col-1){
                    dp[i][j] = grid[i][j] + dp[i+1][j];
                }
                else{
                    dp[i][j] = grid[i][j] + min(dp[i][j+1],dp[i+1][j]);
                }
            }
        }

        return dp[0][0];


// Space optimization 


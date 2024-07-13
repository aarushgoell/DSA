

// Memoization 


 int returnMaxGold(int row, int col, int n, int m,vector<vector<int>>& M,vector<vector<int>>& dp){
        
        
        if(row < 0 || row >= n || col >= m) return 0;
        if(dp[row][col] != 0){
            return dp[row][col];
        }
        
        
        int rightpath = returnMaxGold(row,col+1,n,m,M,dp);
        int rightdiagonal = returnMaxGold(row-1,col+1,n,m,M,dp);
        int leftdiagonal = returnMaxGold(row+1,col+1,n,m,M,dp);
        
        dp[row][col] = M[row][col] + max({rightpath,rightdiagonal,leftdiagonal});
        return  dp[row][col];
        
    }


    int maxGold(int n, int m, vector<vector<int>> M)
    {
        vector<vector<int>> dp(n,vector<int>(m,0));
        int maxi = 0;
        for(int i = 0;i<n;i++){
            maxi = max(returnMaxGold(i,0,n,m,M,dp),maxi);
        }
        
        
        
        return maxi;
    }



    // TABULATION

     int maxGold(int n, int m, vector<vector<int>> M)
    {
        
    vector<vector<int>> dp(n, vector<int>(m, 0));
    
    for (int j = m - 1; j >= 0; --j) {
        for (int i = 0; i < n; ++i) {
            if (j == m - 1) {
                dp[i][j] = M[i][j];
            } else {
                int right = dp[i][j + 1];  
                int right_up = (i == 0) ? 0 : dp[i - 1][j + 1];  
                int right_down = (i == n - 1) ? 0 : dp[i + 1][j + 1];  

                dp[i][j] = M[i][j] + max({right, right_up, right_down});
            }
        }
    }
     int max_gold = 0;
    for (int i = 0; i < n; ++i) {
        max_gold = max(max_gold, dp[i][0]);
    }
    
    return max_gold;
      
    }
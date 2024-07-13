 int returnGold(int row,int col,vector<vector<int>> & visited,vector<vector<int>>& grid,vector<vector<int>>& dp){

            if(row<0 || col<0 || row>=grid.size() || col>=grid[0].size()|| visited[row][col] == 1 || grid[row][col] == 0){
                return 0;
            }
        
                visited[row][col] = 1;
            int leftpath = returnGold(row,col-1,visited,grid,dp);
            int rightpath = returnGold(row,col+1,visited,grid,dp);
            int upath = returnGold(row-1,col,visited,grid,dp);
            int downpath = returnGold(row+1,col,visited,grid,dp);
                visited[row][col] = 0;
            
             return grid[row][col] + max({leftpath,rightpath,upath,downpath});


        }




    int getMaximumGold(vector<vector<int>>& grid){
        int n = grid.size();
        int m = grid[0].size();
        int maxi = 0;
        vector<vector<int>> dp(n,vector<int>(m,0));
        vector<vector<int>> visited(n,vector<int>(m,0));
        for(int i = 0;i<n;i++){
            for(int j = 0;j<m;j++){

                if(grid[i][j] != 0){

                    maxi = max(returnGold(i,j,visited,grid,dp),maxi);

                }
            }
        }

        return maxi;


    }
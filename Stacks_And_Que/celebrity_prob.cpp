int celebrity(vector<vector<int>>& M, int n) 
    {   
        vector<int> arr(n,0);
        for(int i = 0;i<n;i++){
            for(int j = 0;j<n;j++){
                if(i != j){
                if(M[i][j] == 1)arr[j]++;
                }
            }
        }
        
        int index = -1;
        
        for(int i = 0;i<n;i++){
            if(arr[i] == n-1){
                index = i;
                break;
            }
        }
        if(index == -1)return index;
        
        for(int j = 0;j<n;j++){
            if(M[index][j] != 0)return -1;
        }
        
        return index;
        
    }

// pepcoding approach for O(N)

  int celebrity(vector<vector<int>>& M, int n) 
    {   
        stack<int> stk;
        for(int i = 0;i<n;i++){
            stk.push(i);
        }
        
        while(stk.size() != 1){
            int ele1 = stk.top();
            stk.pop();
            int ele2 = stk.top();
            stk.pop();
            if(M[ele1][ele2] == 1){
                stk.push(ele2);
            }
            else{
                stk.push(ele1);
            }
        }
        
        int selectedcel = stk.top();
        
        for(int i = 0;i<n;i++){
             if(i != selectedcel){
                 
             if(M[i][selectedcel] != 1 || M[selectedcel][i] == 1)return -1;
             
                 
             }
        }
        
        return selectedcel;
        
        
        
        
        
    }
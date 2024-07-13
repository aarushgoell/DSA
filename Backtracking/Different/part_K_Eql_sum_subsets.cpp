 bool canWeDivide(int index,vector<int>& nums,vector<int>& sumarray,vector<vector<int>>& sets,int count,int n,int k){

        if(index == nums.size()){
            if(count == k){
                for(int i = 0;i<sumarray.size()-1;i++){
                    if(sumarray[i] != sumarray[i+1])return false;

                }
                return true;
            }
            return false;
        }

        for(int i = 0;i<sets.size();i++){
            if(sets[i].size() > 0){
                sumarray[i] += nums[index];
                sets[i].push_back(nums[index]);
                if(canWeDivide(index+1,nums,sumarray,sets,count,n,k))return true;
                sumarray[i] -= nums[index];
                sets[i].pop_back();
            }
            else{
                sumarray[i] += nums[index];
                sets[i].push_back(nums[index]);
                if(canWeDivide(index+1,nums,sumarray,sets,count + 1,n,k))return true;
                sumarray[i] -= nums[index];
                sets[i].pop_back();
                break;
            }
        }

    return false;

    }

    bool canPartitionKSubsets(vector<int>& nums, int k){
        int n = nums.size();
        vector<int> sumarray(k,0);
        vector<vector<int>> sets(k);
        
        return canWeDivide(0,nums,sumarray,sets,0,n,k);

    }
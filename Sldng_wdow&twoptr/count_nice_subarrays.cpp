int lessthanqualtok(vector<int>& nums, int k,int n){
        if(k<0)return 0;
        int l = 0;
        int r = 0;
        int count = 0;
        int countodd = 0;
        while(r<n){
            if(nums[r] % 2 != 0){
                countodd++;
            }

            while(countodd>k){
                if(nums[l] % 2 != 0){
                    countodd--;
                }
                    l++;
            }

            count = count + (r - l+1);
            r++;
            
        }
    return count;
   }

    int numberOfSubarrays(vector<int>& nums, int k) {
        int n = nums.size();
        return lessthanqualtok(nums,k,n) - lessthanqualtok(nums,k-1,n);
        
    }
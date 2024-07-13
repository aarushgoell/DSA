int numSubarraysWithSum(vector<int>& nums, int goal) {
        unordered_map<int,int> mpp;
        int n = nums.size();
        int prefixsum = 0;
        mpp[0] = 1;
        int count = 0;
        for(int i = 0;i<n;i++){
            prefixsum += nums[i];
            int remaining = prefixsum - goal;
            count += mpp[remaining];
            mpp[prefixsum]++;
        }
        return count;
    }
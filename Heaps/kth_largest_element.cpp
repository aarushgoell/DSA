int findKthLargest(vector<int>& nums, int k) {
        int n = nums.size();
        priority_queue<int> maxheap;
	    for(int i = 0;i<n;i++){
	        maxheap.push(nums[i]);
	    }
	    
        int count = 1;
	    while(k != count){
	        maxheap.pop();
            count++;
	    }
	    
	    return maxheap.top();
    }
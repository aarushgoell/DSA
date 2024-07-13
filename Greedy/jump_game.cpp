class Solution {
public:
    bool canJump(vector<int>& nums) {
        int n = nums.size();
        for(int i = 0;i<n;){
            int maxvalue = INT_MIN;
            int index = -1;
            int limit = i + nums[i];
            if(limit>=n-1)return true;
            for(int j = i+1;j<=limit ;j++){
                if (nums[j] + j > maxvalue) {
                maxvalue = nums[j] + j;
                index = j;
            }              
            }
            if(index == -1)return false;
            i = index;
        }

        return true;
    }
};


2nd optimized approach 

bool canJump(vector<int>& nums) {
        int n = nums.size();
        int maxindex = 0;
        for(int i = 0;i<n;i++){
            if(i > maxindex)return false;
            maxindex = max(maxindex,i + nums[i]);
            if(maxindex>=n-1)return true;
        }
        return true;
    }
};







First Implementation:

Time Complexity: O(n^2)
Space Complexity: O(1)
Second Implementation (Optimized):

Time Complexity: O(n)
Space Complexity: O(1)
class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        int n = nums.size();
        vector<int> rightgreater(n,0);
        stack<int> stk;
        vector<int> ans;
        for(int i = n-1;i>=0;i--){
            while(stk.size()>0 && nums[stk.top()] <= nums[i]){
                stk.pop();
            }

            if(stk.empty()){
                rightgreater[i] = -1;
            }
            else{
                rightgreater[i] = stk.top();
            }
            stk.push(i);
        }

        int j = 0;
        for(int i = 0;i<=n-k;i++){
            if(j<i){
                j = i;
            }
            while(rightgreater[j] != -1 && rightgreater[j] < i + k){
                 j = rightgreater[j];
            }
            ans.push_back(nums[j]);
        }

        return ans;


    }
};
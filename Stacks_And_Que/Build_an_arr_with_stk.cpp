class Solution {
public:

    // void buildStack(int i,vector<int>& arr){
        
    //     arr.push_back(i);
    //     i++;
    //     buildStack(i)
https://leetcode.com/problems/build-an-array-with-stack-operations/?source=submission-ac
    // }



    vector<string> buildArray(vector<int>& target, int n) {
        int arrsize = target.size();
        vector<string> ans;
        int start = 1;
        for(int i = 0;i<arrsize;i++){
            if(target[i] == start){
                ans.push_back("Push");
                start++;
            }
            else{
                int diff = target[i] - start;
                while(diff!=0){
                    ans.push_back("Push");
                    ans.push_back("Pop");
                    diff--;
                }
                ans.push_back("Push");
                start  = target[i]+1;
            }
        }
        return ans;

    }
};
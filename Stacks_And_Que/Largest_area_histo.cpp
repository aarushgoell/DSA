class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        int n = heights.size();
        vector<int> arr(n,0);
        stack<int> stk1;
        stack<int> stk2;
        // https://leetcode.com/problems/largest-rectangle-in-histogram/description/
        for(int i = n-1;i>=0;i--){
            while(!stk1.empty() && heights[stk1.top()]>=heights[i]){
                stk1.pop();
            }
            if(stk1.size() == 0){
                arr[i] = heights[i] * (n - i);
            }
            else{
                arr[i] = heights[i] * (stk1.top() - i);
            }
            stk1.push(i);
        }

         for(int i = 0;i<n;i++){
            while(!stk2.empty() && heights[stk2.top()]>=heights[i]){
                stk2.pop();
            }
            if(stk2.size() == 0){
                arr[i] += heights[i] * i;
            }
            else{
                arr[i] += heights[i] * ((i-1) - stk2.top());
            }
            stk2.push(i);
        }

        int maxi = INT_MIN;
        for(auto it: arr){
            maxi = max(maxi,it);
        }

        return maxi;




    }
};
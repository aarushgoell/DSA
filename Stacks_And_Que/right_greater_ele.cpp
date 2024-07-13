 vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        int n2 = nums2.size();
        int n1 = nums1.size();
        vector<int> ans;
        unordered_map<int,int> mpp;
        stack<int> stk;
        mpp[nums2[n2-1]] = -1;
        stk.push(nums2[n2-1]);
        for(int i = n2-2;i>=0;i--){
            while(!stk.empty() && nums2[i] > stk.top()){
                stk.pop();
            }
            if(stk.size()>0){
                mpp[nums2[i]] = stk.top();
            }
            else{
                mpp[nums2[i]] = -1;
            }
            stk.push(nums2[i]);
        }

        for(int i = 0;i<n1;i++){
            ans.push_back(mpp[nums1[i]]);
        }

    return ans;


    }


    // Another alternative apporach 

    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        int n2 = nums2.size();
        int n1 = nums1.size();
        vector<int> ans;
        unordered_map<int,int> mpp;
        stack<int> stk;
        for(int i = 0;i<n2;i++){
            while(!stk.empty() && stk.top()<nums2[i]){
                mpp[stk.top()] = nums2[i];
                stk.pop();
            }
            stk.push(nums2[i]);
        }

        while(!stk.empty()){
            mpp[stk.top()] = -1;
            stk.pop();
        }

        for(int i = 0;i<n1;i++){
            ans.push_back(mpp[nums1[i]]);
        }

    return ans;


    }
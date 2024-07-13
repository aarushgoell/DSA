void calculatemin(int index,vector<int>& nums,int& mini,vector<int> firstset,vector<int> secondset,int firstsum, int secondsum){

            if(index == nums.size()){
                int value = abs(firstsum - secondsum);
                if(value<mini){
                    mini = value;
                }
                return;
            }


            if(firstset.size()<nums.size()/2){

            firstset.push_back(nums[index]);
            calculatemin(index + 1,nums,mini,firstset,secondset,firstsum + nums[index], secondsum);
            firstset.pop_back();
                
            }

            
            if(secondset.size()<nums.size()/2){

             secondset.push_back(nums[index]);
            calculatemin(index + 1,nums,mini,firstset,secondset,firstsum, secondsum+ nums[index]);
            secondset.pop_back();
                
            }

        }
    int minimumDifference(vector<int>& nums) {
        vector<int> firstset;
        vector<int> secondset;
        int mini = INT_MAX;
        calculatemin(0,nums,mini,firstset,secondset,0, 0);

        return mini;
        
    }
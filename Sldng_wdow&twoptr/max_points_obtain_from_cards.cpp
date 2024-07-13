int maxScore(vector<int>& cardPoints, int k) {
        int n = cardPoints.size();
        int leftsum = 0;
        int rightsum = 0;
        int maxsum = 0;
        int rightindex = n-1;
        for(int i = 0;i<k;i++){
            leftsum += cardPoints[i];
        }
        maxsum = leftsum;
        
        for(int i  = k-1;i>=0;i--){
            leftsum -= cardPoints[i];
            rightsum += cardPoints[rightindex];
            maxsum = max(maxsum,leftsum + rightsum);
            rightindex--;
        }

        return maxsum;

    }
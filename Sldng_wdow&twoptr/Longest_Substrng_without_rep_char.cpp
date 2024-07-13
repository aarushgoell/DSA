// BruteForce

 int lengthOfLongestSubstring(string s) {
        int n = s.length();
        if(n == 1)return 1;
        int maxlen = 0;
        int len;
        for(int i = 0;i<n;i++){
            vector<int> vec(126,0);
            len = 0;
            for(int j = i;j<n;j++){
                if(vec['~' - s[j]] == 0){
                len++;
                maxlen = max(len,maxlen);
                vec['~' - s[j]]++;}
                else{
                    break;
                }
            }
        }
            return maxlen;
    }


// Optimal way using hashmap 
  int lengthOfLongestSubstring(string s) {

        int n = s.length();
        unordered_map<char,int> mpp;
        int r = 0,l = 0;
        int len = 0;
        while(r<n){
            if(mpp.find(s[r]) != mpp.end()){
                    if(mpp[s[r]]>=l){

                    l = mpp[s[r]]+1;

                    }
            }
            len = max(len,r-l+1);
            mpp[s[r]] = r;
            r++;
        }

        return len;

    }
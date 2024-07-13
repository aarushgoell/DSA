// Brute Force 

class Solution {
public:
    int characterReplacement(string s, int k) {
        int n = s.length();
        int maxlen = 0;
        for(int i = 0;i<n;i++){
            vector<int> hash(26,0);
            int maxfreq = 0;
            for(int j = i;j<n;j++){
                hash[s[j] - 'A']++;
                maxfreq = max(maxfreq,hash[s[j] - 'A']);
                int charreplaced = (j - i + 1) - maxfreq;
                if(charreplaced<=k){
                    maxlen = max(j - i + 1,maxlen);
                }
                else{
                    break;
                }

            }
        }

        return maxlen;

    }
};


// Optimal one 


int characterReplacement(string s, int k) {
        int n = s.length();
        int maxlen = 0;
        unordered_map<int,int> mpp;
        int maxfreq = 0;
        int j = 0;
        for(int i = 0;i<n;i++){
            mpp[s[i]]++;
            maxfreq = max(maxfreq,mpp[s[i]]);
            int conversioneeded = (i - j + 1) - maxfreq;
            if(conversioneeded>k){
                mpp[s[j]]--;
                j++;
            }

            maxlen = max(maxlen,i - j + 1);    
        }
        return maxlen;
}
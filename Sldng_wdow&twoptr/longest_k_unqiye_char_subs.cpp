 int n = s.length();
    int l = 0;
    int r = 0;
    unordered_map<char, int> mpp;
    int maxlen = -1;
    
    while (r < n) {
        mpp[s[r]]++;
        
        while (mpp.size() > k) {
            mpp[s[l]]--;
            if (mpp[s[l]] == 0) {
                mpp.erase(s[l]);
            }
            l++;
        }
        
        if (mpp.size() == k) {
            maxlen = max(maxlen, r - l + 1);
        }
        r++;
    }
    
    return maxlen;
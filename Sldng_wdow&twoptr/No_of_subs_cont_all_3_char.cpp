//  ?Brute force

int numberOfSubstrings(string s) {
        int n = s.length();
        int ans = 0;

        for(int i = 0;i<n;i++){
            vector<int> count(3,0);
            int countsub = 0;
            int j;
            for(j = i;j<n;j++){
                if(count[s[j] - 'a'] == 0){
                    countsub++;
                    count[s[j] - 'a'] = 1;
                }
                if(countsub == 3){
                    break; 
                }
            }
            if(countsub == 3){
                ans += n - j; 
            }
        }

        return ans;
    }

    // Optimal one 
 
 int numberOfSubstrings(string s) {
        int n = s.length();
        int ans = 0;
        vector<int> lastseen(3,-1);
        for(int i = 0;i<n;i++){
            lastseen[s[i] - 'a'] = i;
            if(lastseen[0] != -1 && lastseen[1] != -1 && lastseen[2] != -1){
                ans += 1 + min({lastseen[0],lastseen[1],lastseen[2]});
            }
            
        }

        return ans;
    }
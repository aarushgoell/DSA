bool checktrueornot(string s,unordered_map<string,bool> mpp){
        if(s.length() == 0){
            return true;
        }
        
        for(int i = 0;i<s.length();i++){
            string left = s.substr(0,i+1);
            if(mpp.find(left) != mpp.end()){
                
            string right = s.substr(i+1);
                 if(checktrueornot(right,mpp))return true;
                 
            }
        }
      
        
            
        
    }

    int wordBreak(int n, string s, vector<string> &dictionary) {
        unordered_map<string,bool> mpp;
        for(string itr : dictionary){
            mpp[itr] = false;
        }
        return checktrueornot(s,mpp);
        
        
    }
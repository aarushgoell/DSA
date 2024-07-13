class Solution {
public:

    bool ispalindrome(string ispal){
        int s1 = 0;
        int s2 = ispal.length() - 1;
        while(s1 < s2){
            if(ispal[s1] != ispal[s2])return false;
            s1++,s2--;
        }

        return true;

    }
    void returnpartion(string s, vector<vector<string>> &ans, vector<string> &subs){
            
            if(s.length() == 0){
                ans.push_back(subs);
                return;
            }

            
            for(int i = 0;i<s.length();i++){
            string prefix = s.substr(0,i+1);
            string question = s.substr(i+1);
            if(ispalindrome(prefix)){
                subs.push_back(prefix);
                returnpartion(question,ans,subs);
                subs.pop_back();
            }
        }
    }
    vector<vector<string>> partition(string s){
        
        vector<vector<string>> ans;

        vector<string> subs;
        returnpartion(s,ans,subs);
          return ans;

    }
};
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
  public:
    char firstRep (string s)
    {   
        int n = s.length();
        int count[26] = {0};
        char repeating = '#';
        for(int i = n-1;i>=0;i--){
             count[s[i] - 'a']++;   
            if(count[s[i] - 'a'] >= 2){
                repeating = s[i]; 
            }
        }
        return repeating;
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s; cin >> s;
        Solution ob;
        char res = ob.firstRep (s);
        if (res == '#') cout << -1 << endl;
        else cout << res << endl;
    }
    return 0;
}


// Other way for the solution 

   char firstRep (string s)
    {   
        int n = s.length();
        vector<bool> count(26,false);
        char repeating = '#';
        for(int i = n-1;i>=0;i--){
            if(count[s[i] - 'a']){
                repeating = s[i]; 
            }
            else{
               count[s[i] - 'a'] = true; 
            }
        }
        return repeating;
        
        // int mini = INT_MAX; 
        // for(int i = 0;i<n;i++){
        //     if(count[s[i] - 'a'] == -1){
        //         count[s[i] - 'a'] = i;
        //     }else{
        //         mini = min(mini,count[s[i] - 'a']);
        //     }
        // }
        // return mini == INT_MAX ? '#' : s[mini]; 
        
    }


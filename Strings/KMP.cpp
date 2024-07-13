#include<bits/stdc++.h>
using namespace std;

void  longestPrefixSuffix(vector<int> lps,string s1){

    int n = s1.length();
    int len = 0;
    int i = 1;
    len[0] = 0;
    while(i < n){
        if(s1[len] == s1[i]){
            len++;
            lps[i] = len;
            i++;
        }
        else{
            if(len == 0)lps[i] = 0;
            else{
                len = lps[len-1];
            }
        }
    }
}

   vector<int> KMP(string txt, string pat){
    
    vector<int> ans;
    int n = txt.length();
    int m = pat.length();
    vector<int> lps(m,0);
    longestPrefixSuffix(lps,pat);
    int i = 0,j = 0;
    while(i<n){
        if(txt[i] == pat[j]){
            i++,j++;
            if(j == m){
                ans.push_back(i-j);
                j = lps[j-1];
            }
          }
        else if(i < n && txt[i] != pat[j]){
            if(j == 0)   i++;
            else{
                j = lps[j-1];
            }

        }
    }

    return ans;
   }
int main(){
    
   string s1 = "ABCABCD";
   string s2 = "ABCD";
   vector<int> ans = KMP(s1,s2);
   for(int i = 0;i<ans.size();i++){
        cout<<ans[i]<<" ";
   }

    return 0;
}
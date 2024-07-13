
#include<bits/stdc++.h>
using namespace std;

vector<int> naivePatternSearch(string s1, string s2,int n, int m){

   vector<int> ans;
   for(int i = 0;i<=n-m;){
    int j;
    for(j=0;j<m;j++){
            if(s1[i+j] != s2[j])break;
    }
    if(j == m){
        ans.push_back(i);
    }
    if(j == 0){
        i++;
    }
    else{
        i = i + j;
    }
    
   }
   return ans;

}
int main(){
    
   string s1 = "ABCABCDABCD";
   string s2 = "ABCD";
   vector<int> ans = naivePatternSearch(s1,s2,s1.length(),s2.length());
   for(int i = 0;i<ans.size();i++){
        cout<<ans[i]<<" ";
   }


    return 0;
}
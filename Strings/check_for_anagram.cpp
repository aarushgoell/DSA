
#include<bits/stdc++.h>
using namespace std;

bool checksubsequence(string s1, string s2,int n, int m){

    int count[26] = {0};
    for(int i = 0;i<n;i++){
        count[s1[i] - 'a']++;
    }

    for(int i = 0;i<m;i++){
        if(count[s2[i] - 'a'] > 0) count[s2[i] - 'a']--;
        else{
            return false;
        } 
    }
    return true;

}
int main(){
    
   string s1 = "aab";
   string s2 = "bab";
   cout<<checksubsequence(s1,s2,s1.length(),s2.length());


    return 0;
}
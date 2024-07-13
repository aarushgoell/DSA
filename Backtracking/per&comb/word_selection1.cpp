#include<bits/stdc++.h>
using namespace std;
    void wordSelection(int index,string result,int k,int selected,int n,string ans){

        if(index  == n){
            if(selected == k){
                    cout<<ans<<" ";
                cout<<endl;
            }
            return;
        }


    char  ch = result[index];
    wordSelection(index+1,result,k,selected+1,n,ans+ch);
    wordSelection(index+1,result,k,selected,n,ans);

    }


int main(){
    
   string word = "abcabcabc";
   unordered_set<char> seen;
    string result;

    for (char ch : word) {
        if (seen.find(ch) == seen.end()) {
            seen.insert(ch);
            result.push_back(ch);
        }
    }

    int k = 2;
    int n = result.length();


    wordSelection(0,result,k,0,n,"");

    return 0;
}


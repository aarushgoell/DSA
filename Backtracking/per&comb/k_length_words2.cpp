#include<bits/stdc++.h>
using namespace std;

    void k_lengthwords2(int index,string result,unordered_map<char,int>& mpp,int r,string ans){


        if(index > r){
                    cout<<ans<<" ";
            cout<<endl;
            return;
        }


        for(int i = 0;i<result.size();i++){
            char ch = result[i];
            if(mpp.find(ch) == mpp.end()){
                mpp[ch] = i; 
                k_lengthwords2(index+1,result,mpp,r,ans + ch);
                mpp.erase(ch);
            }                                                                                                                                  
        }



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


    unordered_map<char,int> mpp;
    k_lengthwords2(1,result,mpp,k,"");



    return 0;
}


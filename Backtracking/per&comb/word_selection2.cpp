#include<bits/stdc++.h>
using namespace std;

    void wordSelection2(int index,vector<char>& alreadysitted,string result,int n,int r,int lastsitted){


        if(index > r){
            for(int i = 0;i<alreadysitted.size();i++){
                    cout<<alreadysitted[i]<<" ";
            }
            cout<<endl;
            return;
        }      


        for(int i = lastsitted + 1;i<n;i++){
            if(alreadysitted[i] == '-'){
                alreadysitted[i] = result[i];
                wordSelection2(index+1,alreadysitted,result,n,r,i);
                alreadysitted[i] = '-';
            }
        }
    }

int main(){
    
    string word = "aabbcc";
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
    vector<char> alreadysitted(n,'-');
    wordSelection2(1,alreadysitted,result,n,k,-1);



    return 0;
}


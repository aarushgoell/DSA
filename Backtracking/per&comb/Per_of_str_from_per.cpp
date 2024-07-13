#include<bits/stdc++.h>
using namespace std;

    void printpermutations(int index,string s,unordered_map<char,int>& mpp,vector<char>& placing,int n){


        if(index == n){
            for(int i = 0;i<placing.size();i++){
                    cout<<placing[i]<<" ";
            }
            cout<<endl;
            return;
        }

        char character = s[index];
        int chfoundat = mpp[character];


        for(int i = chfoundat+1;i<n;i++){
            if(placing[i] == '-'){
                placing[i] = character;
                mpp[character] = i;
                printpermutations(index+1,s,mpp,placing,n);
                mpp[character] = chfoundat;
                placing[i] = '-';

            }
        }

    }




int main(){
    
   string s = "aabb";
unordered_map<char,int> mpp;
    for(char ch: s){
        mpp[ch] = -1;
    }
    vector<char> placing(s.length(),'-');
    printpermutations(0,s,mpp,placing,s.length());



    return 0;
}


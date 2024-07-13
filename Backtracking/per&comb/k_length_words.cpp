#include<bits/stdc++.h>
using namespace std;

     void k_lengthWords(int index,vector<char>& spots,string result,int count,int n){


        if(index == n){
            if(count == spots.size()){
               for(int i = 0;i<spots.size();i++){
                    cout<<spots[i]<<" ";
               }
               cout<<endl;
            }
                return;
            }
        


        char ch = result[index];

        for(int i = 0;i<spots.size();i++){
            if(spots[i] == '\0'){
                spots[i] = ch;
                k_lengthWords(index+1,spots,result,count+1,n);
                spots[i] = '\0';
            }
        }
        
        k_lengthWords(index+1,spots,result,count,n);

    }





int main(){
    
    string word = "aabbccabc";
    unordered_set<char> seen;
    string result;

    for (char ch : word) {
        if (seen.find(ch) == seen.end()) {
            seen.insert(ch);
            result.push_back(ch);
        }
    }

    int k= 2;
    int n = result.length();

    vector<char> spots(k,'\0');
    k_lengthWords(0,spots,result,0,n);



    return 0;
}


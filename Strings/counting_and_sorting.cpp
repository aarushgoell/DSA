// Counting the frequency of the characters and printing the characters in sorted order with their frequency  


#include<bits/stdc++.h>
using namespace std;
int main(){
    
   string s = "aarush";
   int count[26] = {0};
   for(int i = 0;i<s.length();i++){
        count[s[i] - 'a']++;
   }

    for(int j = 0;j<26;j++){
         if(count[j]>0){
            cout<<(char)(j + 'a')<<" "<<count[j]<<endl;
         }
    }


    return 0;
}


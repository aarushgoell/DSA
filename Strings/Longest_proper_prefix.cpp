
// OPTIMAL SOLUTION O(n)

#include<bits/stdc++.h>
using namespace std;

vector<int> longestPrefixSuffix(string s1,int n){

    vector<int> vec;
    int len = 0;
    vec.push_back(0);
    int i = 1;
    while(i<n){
        if(s1[len] == s1[i]){
            len++;
            vec.push_back(len);
            i++;
        }
        else{
            if(len == 0)
            {
            vec.push_back(0);
            i++;
            }
            else{
                len = vec[len-1];
            }
        }
    }
    return vec;

}
int main(){
    
   string s1 = "ababc";
   vector<int> ans = longestPrefixSuffix(s1,s1.length());
   for(int i = 0;i<ans.size();i++){
        cout<<ans[i]<<" ";
   }

    return 0;
}



// #include<bits/stdc++.h>
// using namespace std;

// vector<int> longestPrefixSuffix(string s1,int n){

//     vector<int> vec;
//     for(int i = 0;i<n;i++){
//         int maxlen = 0;
//      for(int j = 0;j<i;j++){
//         if(s1.substr(0,j + 1) == s1.substr(i-j,j + 1)) maxlen = j + 1;
//      }
//      vec.push_back(maxlen);

//     }
//     return vec;

// }
// int main(){
    
//    string s1 = "ababc";
//    vector<int> ans = longestPrefixSuffix(s1,s1.length());
//    for(int i = 0;i<ans.size();i++){
//         cout<<ans[i]<<" ";
//    }

//     return 0;
// }

// // 2nd way of doing this 


// #include<bits/stdc++.h>
// using namespace std;

// vector<int> longestPrefixSuffix(string s1,int n){

//     vector<int> vec;
//     for(int i = 0;i<n;i++){

//     int l = 0;
//     int j = i;
//     string word1 = "";
//     string word2 = "";
//     int maxlen = 0;
//     while(l<i && j>0){
//         word1 += s1[l];
//         word2 += s1[j];
//         reverse(word2.begin(),word2.end());
//         if(word1 == word2)
//            maxlen = word1.length();
//         l++;
//         j--;
//     }

//     vec.push_back(maxlen);

//     }
//     return vec;

// }
// int main(){
    
//    string s1 = "ababc";
//    vector<int> ans = longestPrefixSuffix(s1,s1.length());
//    for(int i = 0;i<ans.size();i++){
//         cout<<ans[i]<<" ";
//    }

//     return 0;
// }


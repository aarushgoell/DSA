
// subsequence in a string is 2^n. Subsequence means the order of every character in a another string should be equal to the order of the character in original string   


// Iterative way for solving this question  

// TIME COMPLEXITY IS O(n + m) and space complexity is O(1)

// #include<bits/stdc++.h>
// using namespace std;

// bool checksubsequence(string s1, string s2){
//    int l = 0;
//    int r = 0;
//    while(l<s1.length()){
//     if(s1[l] == s2[r])r++;
//     l++;
//    }
//    if(r == s2.length())return true;
//    return false;

// }
// int main(){
    
//    string s1 = "abca";
//    string s2 = "ca";
//    cout<<checksubsequence(s1,s2);


//     return 0;
// }

// Recurive way for solving this question 

   
TIME AND SPCE COMPLEXITY OF THESE IS O(n + n)

#include<bits/stdc++.h>
using namespace std;

 bool recursivesol(string s1, string s2, int n, int m){
        if(m == 0)return 1;
        if(n == 0)return 0;
        if(s1[n-1] == s2[m-1]) return recursivesol(s1,s2,n-1,m-1);
        else{
           return recursivesol(s1,s2,n-1,m);
        }
    }



int main(){
    
   string s1 = "abca";
   string s2 = "da";
   cout<<recursivesol(s1,s2,s1.length(),s2.length());


    return 0;
}

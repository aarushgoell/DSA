// Brute force will be the making another string variable and copy the original string in that variable and then do the reverse of the copy variable and then check both of the string by == ?
// Time and space complexity will be O(n) 



// Better sol
// Time = O(n)
// Space = O(1)

#include<bits/stdc++.h>
using namespace std;

bool checkpalindrome(string s){
   int l = 0;
   int r = s.length()-1;
   while(l<r){
    if(s[l] != s[r])return false;
    l++;
    r--;
   }
   return true;

}
int main(){
    
   string s = "abca";
   cout<<checkpalindrome(s);


    return 0;
}


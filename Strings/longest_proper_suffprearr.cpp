
// Like naive algorithm slide the pattern one by one. 
// Compare hash values of pattern current text window
// If hash match, then only comapre individual characters

// #include<bits/stdc++.h>
// using namespace std;

//     int passarr(string arr1){
//         int n1 = arr1.size();
//         int l = 1;
//         int r = 0;
//         while(l<n1){
//             if(arr1[l] == arr1[r]){
//                 r++;
//             }
//             else{
//                 r = 0;
//             }
//             l++;
//         }
//         return r;
//     }

// void printlps(string arr, int n){
//     for(int i = 0;i<n;i++){
//           int ans =  passarr(arr.substr(0,i+1));
//           cout<<ans<<" ";
//     }
// }


// int main(){

// int n;
// string arr = "abbabb";
// // for(int i = 0;i<n;i++){
// //     arr += ;
// // }
//  printlps(arr,6);

// }

// There is another way to calculate this by

#include<bits/stdc++.h>
using namespace std;

   void creatinglps(string s, int *lps){
        int n1 = s.length();
        int len = 0;
        lps[0] = 0;
        int i = 1;
        while(i<n1){
            if(s[i] == s[len]){
                len++;
                lps[i] = len;
                i++; 
            }
            else{
                if(len == 0){
                    lps[i] = 0;
                    i++;
                }
                else{
                    len  = lps[len-1];
                }
            }
        }
    }

int main(){
    
   
   string s = "aaabaaaac";
   int n = s.length();
   int lps[n];
   creatinglps(s,lps);
   for(int i = 0;i<n;i++){
    cout<<lps[i]<<" ";
   }








   

    return 0;
}





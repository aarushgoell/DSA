// #include<bits/stdc++.h>
// using namespace std;

//     void printways(int index,int arr[],int n,string ans){

//         if(index==n+1){
//             cout<<ans<<" "<<endl;
//             return;
//         }
//          else if (index > n || arr[index] == 0) {
//          return;
//     }

//         for(int i = 1;i<=arr[index];i++){
//             ostringstream oss;
//             oss<<to_string(index)<<"->"<<to_string(index + i)<<" ";
//             string result = oss.str();
//             printways(index + i,arr,n,ans + result);    
//         }
//     }




// int main(){
    
//    int arr[] = {2,4,1,0,2,3};
//    int n = 5;
//    printways(0,arr,n,"");

//     return 0;
// }



// Using Tabulation 

#include<bits/stdc++.h>
using namespace std;

    int printways(int arr[],int n){

        vector<int> dp(n+1,0);
        dp[n] = 1;
        for(int i = n-1;i>=0;i--){
            for(int j = 1;j<=arr[i] && i + j <dp.size();j++){
                dp[i] += dp[i+j];
            }
        }

        return dp[0];
       
    }




int main(){
    
   int arr[] = {3,3,0,2,2,3};
   int n = 6;
   int ans = printways(arr,n);
   cout<<ans;

    return 0;
}

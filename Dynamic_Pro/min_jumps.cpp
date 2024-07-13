
#include<bits/stdc++.h>
using namespace std;

    int printways(int arr[],int n){

        vector<int> dp(n,0);
        if(arr[n-1] != 0){
        dp[n-1] = 1;
        }

        for(int i = n-2;i>=0;i--){
                if(arr[i] == 0)continue;
                else if(i + arr[i] >= dp.size()){
                     dp[i] = 1;
                     continue;
                }
              int mini = INT_MAX;
              for(int jump = 1;jump<=arr[i] && i+ jump < dp.size();jump++){    
                               if(dp[i + jump] != 0){
                        mini = min((1 + dp[i + jump]),mini);  
                    }
              }
              if(mini == INT_MAX){
                dp[i] = 0;
              }
              else{
                dp[i] = mini;
              }
             
        }

        return dp[0];
       
    }


int main(){
    
   int arr[] = {4,2,0,2,2,3};
   int n = 6;
   int ans = printways(arr,n);
   cout<<ans;

    return 0;
}
#include<bits/stdc++.h>
using namespace std;

    vector<int> value(vector<vector<int>> &vec, int el){
        int j = vec.size();
        int m = vec[0].size();
        int l = 0;
        int n  = m-1;
        vector<int> ans;
        while(l<j && n>=0){
            if(vec[l][n] < el){
                l++;
            }
            else if(vec[l][n] > el){
                n--;
            }
            else{
               ans.push_back(l);
               ans.push_back(n);
               return ans;
            }
        }
        ans.push_back(-1);
        return ans;


    }
    
int main(){

    // vector<vector<int>> vec = {{1,2,3},{4,5,6},{7,8,9}};
    vector<vector<int>> vec = {{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16}};
    vector<int> ans = value(vec,17);
    for(auto it: ans){
        cout<<it<<" ";
    }

    return 0;
}


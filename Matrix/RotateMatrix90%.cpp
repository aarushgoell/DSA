#include<bits/stdc++.h>
using namespace std;

    void snakepattern(vector<vector<int>> &vec){
        int n = vec.size();
        int m = vec[0].size();
        for(int i = 0;i<n;i++){
            for(int j = i+1;j<m;j++){
                swap(vec[i][j],vec[j][i]);
            }
        }
        int start = 0;
        while(start<m){
        int l = 0;
            while(l<n/2){
                swap(vec[l][start], vec[n-l-1][start]);
                l++;
            }
            start++;
        }

         for(int i = 0;i<n;i++){
            for(int j = 0;j<m;j++){
                cout<<vec[i][j]<<" ";
            }
            cout<<endl;
        }
    }
    
int main(){

    vector<vector<int>> vec = {{1,2,3},{4,5,6},{7,8,9}};
    snakepattern(vec);


    return 0;
}


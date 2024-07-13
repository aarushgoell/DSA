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
        for(int i = 0;i<n;i++){
            for(int j = 0;j<m;j++){
               cout<<vec[i][j]<<" ";
            }
            cout<<endl;
        }
    }
    
int main(){

    vector<vector<int>> vec = {{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16}};
    snakepattern(vec);


    return 0;
}


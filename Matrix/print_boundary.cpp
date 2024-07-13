#include<bits/stdc++.h>
using namespace std;

    void snakepattern(vector<vector<int>> &vec){
        int n = vec.size();
        int m = vec[0].size();
        for(int i = 0;i<m;i++){
            cout<<vec[0][i]<<" ";
        }
        cout<<endl;
        if(n>=2){
            if(n > 2){
            for(int i = 1;i<n-1;i++){
                cout<<vec[i][m-1]<<" ";
            }
            cout<<endl;
            }
            for(int i = m-1;i>=0;i--){
                cout<<vec[n-1][i]<<" ";
            }
            cout<<endl;
            if(m>2){
            for(int i  = n-2;i>=1;i--){
                cout<<vec[i][0]<<" ";
            }
            }
            cout<<endl;
        }

    }
    
int main(){

    // vector<vector<int>> vec = {{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16}};
    // vector<vector<int>> vec = {{1,2,3,4},{5,6,7,8}};
    vector<vector<int>> vec = {{1,2,3,4}};
    // vector<vector<int>> vec = {{1},{2},{3}};
    snakepattern(vec);


    return 0;
}

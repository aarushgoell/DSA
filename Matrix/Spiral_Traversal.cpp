#include<bits/stdc++.h>
using namespace std;

    void snakepattern(vector<vector<int>> &vec){
        int n = vec.size();
        int m = vec[0].size();
        int topleft = 0;
        int topright = m-1;
        int bottomright = n-1;
        int bottomleft = 0;
        while(topleft<=bottomright && bottomleft<=topright){
            for(int i = 0;i<=topright;i++){
                cout<<vec[topleft][i]<<" ";
            }
            cout<<endl;
            topleft++;
            for(int i = topleft;i<=bottomright;i++){
               cout<<vec[i][topright]<<" ";
            }
            cout<<endl;
            topright--;
            if(topleft<=bottomright){
            for(int i = topright;i>=bottomleft;i--){
                cout<<vec[bottomright][i]<<" ";
            }
            bottomright--;
            }
            cout<<endl;
            if(bottomleft<=topright){
            for(int i = bottomright;i>=topleft;i--){
                cout<<vec[i][bottomleft]<<" ";
            }
            bottomleft++;
            }
            cout<<endl;

        }      

    }
    
int main(){

    vector<vector<int>> vec = {{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16}};
    snakepattern(vec);


    return 0;
}


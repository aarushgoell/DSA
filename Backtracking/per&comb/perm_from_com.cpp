#include<bits/stdc++.h>
using namespace std;

    void permFromComb(int index,vector<int>& check,int count,int n,int r,string ans){


        if(index == n){
            if(count == r){
               cout<<ans<<" "<<endl;
                }
            return;;
            }


        for(int i = 0;i<r;i++){
            if(check[i] == 0){
                check[i] = 1;
                permFromComb(index+1,check,count+1,n,r,ans + to_string(i+1));
                check[i] = 0;
            }
        }
        
        permFromComb(index+1,check,count,n,r,ans + "-");

    }




int main(){
    
    int n = 3;
    int r = 2;

    vector<int> check(r,0);
    permFromComb(0,check,0,n,r,"");



    return 0;
}


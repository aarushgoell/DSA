#include<bits/stdc++.h>
using namespace std;

    void combFromPerm(int index,vector<int>& alreadysitted,int n,int r,int lastsitted){


        if(index > r){
            for(int i = 0;i<alreadysitted.size();i++){
                    cout<<alreadysitted[i]<<" ";
            }
            cout<<endl;
            return;
        }      


        for(int i = lastsitted + 1;i<n;i++){
                alreadysitted[i] = index;
                combFromPerm(index+1,alreadysitted,n,r,i);
                alreadysitted[i] = 0;
        }
    }

int main(){
    
    int n = 4;
    int r = 2;

    vector<int> alreadysitted(n,0);
    combFromPerm(1,alreadysitted,n,r,-1);



    return 0;
}


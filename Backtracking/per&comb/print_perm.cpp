#include<bits/stdc++.h>
using namespace std;

    void printpermutations(int index,vector<int>& alreadysitted,int n,int r){


        if(index > r){
            for(int i = 1;i<alreadysitted.size();i++){
                    cout<<alreadysitted[i]<<" ";
            }
            cout<<endl;
            return;
        }


        for(int i = 1;i<=n;i++){
            if(alreadysitted[i] == 0){
                alreadysitted[i] = index;
                printpermutations(index+1,alreadysitted,n,r);
                alreadysitted[i] = 0;
            }
        }



    }




int main(){
    
    int n = 4;
    int r = 2;

    vector<int> alreadysitted(n+1,0);
    printpermutations(1,alreadysitted,n,r);



    return 0;
}


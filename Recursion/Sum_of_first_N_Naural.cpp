#include<bits/stdc++.h>
using namespace std;

    // first_N_Sum(int n, int i){
    //     if(n == 0)return i;

    //     return first_N_Sum(n-1,i+n);
    // }

    // or

    first_N_Sum(int n){
        if(n == 0)return 0;
        return n + first_N_Sum(n-1);
    }


int main(){
    
   

// cout<<first_N_Sum(5,0);
cout<<first_N_Sum(4);








   

    return 0;
}


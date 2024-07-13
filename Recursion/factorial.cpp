#include<bits/stdc++.h>
using namespace std;

    // Below is a tail recursion

    // fact(int n, int k){
    //     if(n == 0)return k;

    //     return fact(n-1,n * k);
    // }

    // Below is Non tail recursion

     fact(int n){
        if(n == 0 || n == 1)return 1;
        return n * fact(n-1);

    }

int main(){
    
   




cout<<fact(5);



   

    return 0;
}


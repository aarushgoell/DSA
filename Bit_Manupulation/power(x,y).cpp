#include<bits/stdc++.h>
using namespace std;

    void power(int x, int n){
        long long int res = 1;
        while(n!=0){
            if(n % 2 !=0){
                res = res * x;
            }
            x = x * x;
            n = n/2;
        }
        cout<<res;
    }

int main(){
    power(5,6);
   

    return 0;
}


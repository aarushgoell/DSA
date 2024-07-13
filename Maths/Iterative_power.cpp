#include<bits/stdc++.h>
using namespace std;

   void calculatePower(int x,int n){

    int res = 1;
    while(n != 0){
        if(n % 2 != 0){
            res = res * x;}
            x = x * x;
            n = n/2;
        }
    cout<<res<<endl;

}

int main(){
    
    calculatePower(2,4);

    return 0;
}
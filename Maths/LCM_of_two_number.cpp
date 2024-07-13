#include<bits/stdc++.h>
using namespace std;
    int LCM(int a, int b){
        
        int gcd = 0;
        int mul = a * b;
        while(a!=0 && b != 0){
            if(a>b){
                a = a % b;
            }
            else{
                b = b % a;
            }
        }
        if(a == 0)gcd = b;
        else{
            gcd = a;
        }

        return mul/gcd;
    }
int main(){
    int a = 2;
    int b = 8;
    cout<<LCM(a,b)<<endl;

    return 0;
}


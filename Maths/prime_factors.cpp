#include<bits/stdc++.h>
using namespace std;
  void primefactors(int n){
        while(n != 1){
            while(n%2==0 && n!=1){
                cout<<2<<" ";
                n = n/2;
            }
            while(n%3==0 && n!=1){
                cout<<3<<" ";
                n = n/3;
            }
            if(n != 1){
            for(int i = 5;i*i<=n;i += 6){
                while(n % i == 0){
                    cout<<i<<" ";
                    n = n/i;
                }
                while(n % (i + 2) == 0){
                    cout<<i + 2<<" ";
                    n = n/(i + 2);
                }
            }
            }

        }
  }
int main(){

    primefactors(1000);
    return 0;
}


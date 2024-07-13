// Printing divisors in sorted order 

#include<bits/stdc++.h>
using namespace std;

   void printingdivisor(int m){

        int i;
        for(i = 1;i*i<=m;i++){
           if(m % i == 0){
            cout<<i<<" ";
           }
        }
        
        for( ;i>=1; i--){
            if(m % i == 0){
                if(m/i != i){
                    cout<<m/i<<" ";
                }
            }
        }


   }

int main(){
    

    printingdivisor(100);







   

    return 0;
}


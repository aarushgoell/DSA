#include<bits/stdc++.h>
using namespace std;

   void Print_1_to_N(int n){

        if(n == 0)return ;

        Print_1_to_N(n-1);
        cout<<n<<" ";
    }

int main(){
    
   Print_1_to_N(5);


    return 0;
}


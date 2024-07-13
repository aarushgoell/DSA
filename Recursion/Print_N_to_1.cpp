// Time complexity: o(n) as at every function call we are performing constant operation 
// Auxilarry space: o(n) we are storing every function inside the stack frame. IF we use tail call elimination then the auxilary space will lead to o(1)

#include<bits/stdc++.h>
using namespace std;
    
   void N_to_1(int n){
    if(n == 0) return ;

    cout<<n<<" ";
    N_to_1(n-1);
   }


int main(){
    
    N_to_1(5);
   

    return 0;
}


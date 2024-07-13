#include<bits/stdc++.h>
using namespace std;

    void checkkthbit(int x, int k){
        // int mask = 1<<(k-1);
        // if((x & mask) != 0)cout<<"setbit";
        // else cout<<"1";

    // we can also do like this
        x = x>>(k-1);
        int mask = 1;
     
        if((x & mask) != 0)cout<<"setbit";
        else cout<<"1";


    }

int main(){
    
   checkkthbit(5,1);

    return 0;
}


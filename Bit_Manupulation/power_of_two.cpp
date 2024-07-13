// #include<bits/stdc++.h>
// using namespace std;

//     bool powerofTwo(int n){
//         while(n % 2 == 0 && (n!=1 && n!=0)){
//             n = n/2;
//         }
//         if(n !=1)return false;
//         return true;
//     }

// int main(){
//     cout<<powerofTwo(24);


//     return 0;
// }


// There is another optimal way of doing this solution 



#include<bits/stdc++.h>
using namespace std;

    bool powerofTwo(int n){

        if(n == 0)return false;
        if((n & n-1) == 0)return true;
        else return false;    
    
    }

int main(){
    cout<<powerofTwo(50);


    return 0;
}
// #include<bits/stdc++.h>
// using namespace std;
    
//     void primefactors(int n){
//         for(int i = 2;i*i<=n;i++){
//             while(n % i == 0){
//                 cout<<i<<" ";
//                 n = n/i;
//             }
//         }
//         if(n>1)cout<<n<<" ";
//     }

// int main(){

//     primefactors(13);
    

//     return 0;
// }


// But this code is taking sqrt(n) time and if there are multiple test cases then it will take T * sqrt(n);

/*

Test cases are <= 10^6
and n is also <= 10^6
 so 10^6 * 10^(6/2) = 10^9 which will give TLE
*/

// It is taking nlog(logn) time complexity 
// This is an optimzed solution for this ans 

#include<bits/stdc++.h>
using namespace std;

int n = 1000000;
int seive[1000001];

void createSeive(){

for(int i = 2;i<=n;i++){
    seive[i] = i;
}

for(int i = 2;i*i<=n;i++){
    if(seive[i] == i){
        for(int j = i * i;j<=n;j+=i){
            if(seive[j] == j){
            seive[j] = i;
            }
        }
    }
}
}

int main(){

   createSeive();
    // int n;
    // cin>>n;
    int n = 64;
    while(n != 1){
        cout<<seive[n]<<" ";
        n = n/seive[n];
    }
    
    return 0;
}

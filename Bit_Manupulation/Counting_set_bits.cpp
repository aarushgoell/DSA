// #include<bits/stdc++.h>
// using namespace std;

//     void CountingSetBits(int x){
//         int count = 0;
//         while(x!=0){
//             if((x & 1) != 0){
//                 count++;                
//             }
//             x = x>>1;
//         }
//         cout<<count<<" ";
//     }


// int main(){

//     CountingSetBits(13);

//     return 0;
// }

// Below is the similar way but just little bit diffenece in syntax

// #include<bits/stdc++.h>
// using namespace std;

//     void CountingSetBits(int x){
//        int res = 0;
//        while(x>0){
//             if(x & 1){
//                 res++;
//             }
//             x  = x>>1;

//        }
//        cout<<res;
//     }


// int main(){

//     CountingSetBits(2);

//     return 0;
// }

// There is also an Optimal way of doing this solution by removing the last set bit of a number if there is any 




 #include<bits/stdc++.h>
using namespace std;

    void CountingSetBits(int x){
       int res = 0;
       while(x!=0){
        res++;
        x = x & x-1;
       }
       cout<<res;
    }


int main(){

    CountingSetBits(13);

    return 0;
}
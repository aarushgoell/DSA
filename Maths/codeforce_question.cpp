/*

find a , b, c where a x b x c = n;
and a != b != c != 1;

*/

// If there is a time limit of one second given in the questions then there will be almost 10^8 operations that have to be performed but if there 10^9 operations that have to be performed then 
// the time limit will be 10 sec and then question have to be solved in logn or sqrt(n)

/*

Suppose n is 64 we will take the smallest factor then b will be the next smallest and  automatically either C will be equal or greater than a and b

a * b * c = 64;
so 64 smallest factor would be 2

and then n values changed to n = 64/2  = 32

now 32 smallest factor other than a will be 4

and then now the left value is the c

a = 2, b = 4, c = 8


But if take an example of 8

a will be 2
b will be 4 
c will be 1 

which is not factor  

*/

#include<bits/stdc++.h>
using namespace std;

   void valuescheck(int n){

   int a  = n, b  = n, c = n;
   
   for(int i = 2;i*i<=n;i++){
    if(n % i == 0){
        a = i;
        break;
    }
   }

    n = n/a;

   for(int i = 2;i*i<=n;i++){
    if(n % i == 0){
        if(i != a){
            b = min(b,i);
        }
        if(n/i != i){
            if(n/i != a){
            b = min(b,n/i);
            }
        }
    }
   }

   n = n/b;
   c = n;

   cout<<a<<" "<<b<<" "<<c<<" ";


   } 

int main(){


   valuescheck(8);


    return 0;
}



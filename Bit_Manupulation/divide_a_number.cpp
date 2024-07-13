#include<bits/stdc++.h>
using namespace std;

    int getQuotient(int dividend, int divisor){
        if(dividend == divisor)return 1;
        bool sign  = true;
        if(dividend>=0 && divisor<0 || dividend <=0 && divisor>0){
            sign  = false;
        }
        dividend = abs(dividend);
        divisor = abs(divisor);
        int ans = 0;
        while(dividend >= divisor){
            int count = 0;
            while(dividend >= ((divisor <<count))){
                count += 1;
            }
            ans += 1<<count-1;
            dividend = dividend - ((divisor << count-1));
        }

        if(ans == 1<<31 && sign == true){
                return INT_MAX;
        }
        else if((ans == 1<<31 && sign == false)){
            return INT_MIN;
        }
        else{
            return sign ? ans : (-1 * ans); 
        }


    }

int main(){
    
   cout<<getQuotient(22,3);

    return 0;
}


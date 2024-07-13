#include<bits/stdc++.h>
using namespace std;

   void pickOddNumberOfElements(int arr[], int n){
        int res = 0;
        for(int i = 0;i<n;i++){
            res = res ^ arr[i];
        }
        int k = res & (~(res - 1));
        int ele1 = 0;
        int ele2 = 0;
        for(int i = 0;i<n;i++){
            if(arr[i] & k != 0){
                ele1 = ele1 ^ arr[i];
            }
            else{
                ele2 = ele2 ^ arr[i];
            }
        }
        cout<<ele1<<" "<<ele2<<" ";


    }

int main(){
    
        
    int arr[] = {1,1,2,2,3,4};
    int n = sizeof(arr)/sizeof(arr[0]);
    pickOddNumberOfElements(arr,n);



    return 0;
}


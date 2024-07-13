// Takes an element and places it at the correct position start from second and compare every adjacent left element to index 0

// Time complexity is for average and Worst Case is O(n^2) and best case is o(n)is the element is already sorted 


#include<bits/stdc++.h>
using namespace std;
int main(){
    
   int arr[] = {4,2,6,1,3};
   int n = sizeof(arr)/sizeof(arr[0]);
   for(int i = 1;i<n;i++){
        int copy = i;
        while(i>0 && arr[i-1]>arr[i]){
            swap(arr[i-1],arr[i]);
            i--;
        }
        i = copy;
   }

   for(int i = 0;i<n;i++){
    cout<<arr[i]<<" ";
   }



    return 0;
}
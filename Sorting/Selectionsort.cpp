// Select minimums
/*
Get the minimum fromm the array place it at the first Whatever the element present at that poisiton swap to the smallest element index

Now search for the next minimum from second position to the last and swap both of them 

like this from next index and in the end array will be sorted 
*/

// Time complexity is O(n^2) for Best, Worst and Average Case


#include<bits/stdc++.h>
using namespace std;
int main(){
    
   int arr[] = {9,8,7,6,5,4};
   int n = sizeof(arr)/sizeof(arr[0]);
   for(int i = 0;i<n-1;i++){
   int min = arr[i];
            int swappingIndex = i;
        for(int j = i+1;j<n;j++){
            if(arr[j]<min){
                min = arr[j];
                swappingIndex = j;
            }
        }
        swap(arr[i],arr[swappingIndex]);
   }

   for(int i = 0;i<n;i++){
    cout<<arr[i]<<" ";
   }



    return 0;
}


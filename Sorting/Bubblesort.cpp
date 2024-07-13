/*

It pushes maximum to the last by checking first every two consecutive elements are if both the two elements are not in sorted order then they will be swapped and then next two consecutive elements will be checked. And all the maxium elements will be pushed in to the last  

*/



// Time complexity is O(n^2) for worst and average case and O(n) in best case where there is not swapping done and the array is already sorted

#include<bits/stdc++.h>
using namespace std;
int main(){
    
   int arr[] = {5,4,3,2,1};
   int n = sizeof(arr)/sizeof(arr[0]);
   int noswapping = 0;
   for(int i = 0;i<n-1;i++){
        for(int j = 0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
                noswapping = 1;
            }
        }
        if(!noswapping){
            break;
        }
   }

    if(!noswapping){
        cout<<"No swapping"<< " ";
    }
    else
   for(int i = 0;i<n;i++){
    cout<<arr[i]<<" ";
   }



    return 0;
}


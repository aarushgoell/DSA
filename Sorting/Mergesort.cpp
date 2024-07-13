// Merge sort is a divide and Merge algorithm and it takes O(nlogn) time complexity.And space comlexity as O(n) for temp array while merging the elements 

#include<bits/stdc++.h>
using namespace std;

    void merge(int arr[], int low ,int mid, int high){
        int l = low;
        int r = mid+1;
        vector<int> copy;
        while (l<=mid && r<=high)
        {
            if(arr[l]<arr[r]){
                copy.push_back(arr[l]);
                l++;
            }
            else{
                copy.push_back(arr[r]);
                r++;
            }
        }
        while (l<=mid)
        {
            copy.push_back(arr[l]);
            l++;
        }
        while (r<=high)
        {
            copy.push_back(arr[r]);
            r++;
        }

    for(int i = low;i<=high;i++){
        arr[i] = copy[i-low];
    }


    }

    void mergesort(int arr[],int low,int high){
        if(low>=high)return ;
        int mid = (low + high)/2;
        mergesort(arr,low, mid);
        mergesort(arr,mid+1, high);
        merge(arr,low,mid,high);
    }

int main(){
    
   int arr[] = {5,4,3,2,1};
   int n = sizeof(arr)/sizeof(arr[0]);
   mergesort(arr,0,n-1);

   for(int i = 0;i<n;i++){
    cout<<arr[i]<<" ";
   }




    return 0;
}


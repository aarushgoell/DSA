// Quick sort is better than merge sort as it takes no space and time complexity is O(n)

// Pick a pivot and place it in correct place in the sorted array 



#include<bits/stdc++.h>
using namespace std;


    int partition(int arr[], int low,int high){
        int pivot = arr[low];
        int i = low;
        int j = high;
        while(i<j){
            while(i<=high && arr[i] <= pivot){
                i++;
            }
            while(j>=0 && arr[j]>pivot){
                j--;
            }
            if(i<j){
                swap(arr[i],arr[j]);
            }
        }
      
        swap(arr[low],arr[j]);
        return j;

    }

    

    void quicksort(int arr[],int low,int high){
        if(low>=high){
            return;
        }
        // if(low<high){

            int partitionindex = partition(arr,low, high);
            quicksort(arr,low,partitionindex-1);
            quicksort(arr,partitionindex+1,high);

        // }

    }
int main(){
    
   int arr[] = {4,1,5,3,2};
   int n = sizeof(arr)/sizeof(arr[0]);

   quicksort(arr,0,n-1);

   for(int i = 0;i<n;i++){
    cout<<arr[i]<<" ";
   }




    return 0;
}


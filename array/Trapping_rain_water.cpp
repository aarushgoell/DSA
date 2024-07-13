#include<bits/stdc++.h>
using namespace std;

int Trapping(vector<int> arr, int n){

    // This is one approach for solving this problem 

    // int maxleftwall = -1;
    // int maxrightwall = -1;
    // int totalwater = 0;
    // vector<int> vecleftmax;
    // vector<int> vecrightmax;
    // for(int i = 0;i<n;i++){
    //     maxleftwall = max(arr[i],maxleftwall);
    //     maxrightwall = max(arr[n-i-1],maxrightwall);
    //     vecleftmax.push_back(maxleftwall);
    //     vecrightmax.push_back(maxrightwall)
    // }
    // int ans = 0;

    // for(int i = 1;i<n-1;i++){
    //     ans = min(vecleftmax[i],vecrightmax[i]);
    //     totalwater += ans - arr[i];
    // }
    // return totalwater;

    // This is another approach for solving this question

    int l = 0;
    int r = n-1;
    int leftmax = 0;
    int rightmax = 0;
    int res = 0;
    while(l<r){
        if(arr[l]<=arr[r]){
            if(leftmax >= arr[l]){
                leftmax = arr[l];
            }
            else{
                res += leftmax - arr[l];
            }
            l++;
        }
        else{
            if(rightmax >= arr[r]){
                rightmax = arr[r];
            }
            else{
                res += rightmax - arr[r];
            }
            r--;
        }
    }
    return res;
    


}


int main(){

    vector<int> vec;

    int n;
    cin>>n;
    for(int i = 0;i<n;i++){
        int el;
        cin>>el;
        vec.push_back(el);
    }
   cout<<Trapping(vec,n);

    return 0;
}

// There is another approach for doing this 

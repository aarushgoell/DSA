#include<bits/stdc++.h>
using namespace std;

    int calculateprefixsum(vector<int> arr){

        int sum = 0;
        for(int i = 0;i<n;i++){
               sum += arr[i];
               arr[i] = sum;
        }
    }
    
    int prefix(vector<int> arr, int n, int index1, int index2){


        if(index1  == 0){
            return arr[index2];
        }
        else{
            return arr[index2] - arr[index1 -1];
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
    calculateprefixsum(vec,n);
    int t;
    cin>>t;
    while(t--){
        int start, end;
        cin>>start>>end;
        cout<<prefix(vec,n,start,end)<<endl;
    }

    return 0;
}


//

//Prefix getSum

// #include <iostream>
// #include <cmath>
// using namespace std;

// int getSum(int ps[], int l, int r){
//     if(l==0)
//         return ps[r];
//     return ps[r]-ps[l-1];
// }

// int main(){
//     int arr[]={2, 8, 3, 9, 6, 5, 4};
//     int n=7;
//     int ps[n];
//     ps[0] = arr[0];
//     for(int i=1; i<n; i++)
//         ps[i] = ps[i-1]+ arr[i];
//    cout<<getSum(ps,1,3); 
//     return 0;
// }
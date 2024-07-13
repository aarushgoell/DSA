
 // Most  efficient approach
    

    int res = accumulate(arr.begin(),arr.end(),0);
    int left = 0;
    for(int i = 0;i<n;i++){
        res = res - arr[i];
        if(res == left){
            return true;
        }
        left+= arr[i];
    }
    return false;
    

// This is the first appraoch for solving this question

// #include<bits/stdc++.h>
// using namespace std;

//     bool equilibriumPoint(vector<int> arr, int n){

//         vector<int> firstarr = {0};
//         vector<int> secondarr = {0};
//         int sum1 = 0;
//         int sum2 = 0;
//         for(int i = 1;i<n;i++){
//             sum1 += arr[i-1];
//             firstarr[i] = sum1;
//         }
//         for(int i = n-2;i>=0;i--){
//             sum2 += arr[i+1];
//             secondarr[i] = sum2;
//         }

//         for(int i = 0;i<n;i++){
//             if(firstarr[i] == secondarr[i])return true;
//         }

//     return false;

        

//     }


// int main(){

//     vector<int> vec;

//     int n;
//     cin>>n;
//     for(int i = 0;i<n;i++){
//         int el;
//         cin>>el;
//         vec.push_back(el);
//     }
//    cout<<equilibriumPoint(vec,n);

//     return 0;
// }


#include<bits/stdc++.h>
using namespace std;
    
    int equilibriumPoint(vector<int> arr, int n){




        // int prefixsum = 0;
        // int prearray[n] = {0};
        // for(int i = 0;i<n;i++){
        //        prefixsum += arr[i];
        //        prearray[i] = prefixsum;
        // }
        // if(prearray[n-1] - prearray[0] == 0)return true;
        // else if(prearray[n-2] == 0)return true;
        // for(int i = 1;i<n;i++){
        //     if(prearray[i-1]  == (prearray[n-1] - prearray[i]))return true;
        // }
        // return false;

    // Most  efficient approach
    

    int res = accumulate(arr.begin(),arr.end(),0);
    int left = 0;
    for(int i = 0;i<n;i++){
        res = res - arr[i];
        if(res == left){
            return true;
        }
        left+= arr[i];
    }
    return false;
    


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

    return 0;
}


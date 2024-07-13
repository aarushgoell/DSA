#include<bits/stdc++.h>
using namespace std;

    int stockbuy(vector<int> arr, int n){

        int ans = 0;
        int maxans = 0;
        for(int i = 1;i<n;i++){
             ans = arr[i] - arr[i-1];
             if(ans<0){
                ans = 0;
             }
             maxans += ans;
        }
        return maxans;
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
    cout<<stockbuy(vec,n);

    return 0;
}

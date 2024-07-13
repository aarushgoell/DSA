#include<bits/stdc++.h>
using namespace std;

    int max_differnce(vector<int> arr, int n){

        int minn = arr[0];
        int maxans = INT_MIN;
        for(int i = 1;i<n;i++){
            maxans = max(maxans,arr[i]-minn);
            minn = min(minn,arr[i]);
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
    cout<<max_differnce(vec,n);

    return 0;
}

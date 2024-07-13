#include<bits/stdc++.h>
using namespace std;

    int Even_OddSub(vector<int> arr, int n){

        int count = 1;
        for(int i = 0;i<n;i++){
            arr[i] = arr[i]%2;   
        }
        int maxcount = 1;
        int element = arr[0];
        for(int i = 1;i<n;i++){
            if(element == arr[i]){
                count = 1;
            }
            else{
                count++;
                element = arr[i];
            }
            maxcount = max(count,maxcount);
        }

        return maxcount;

        
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
    cout<<Even_OddSub(vec,n);

    return 0;
}

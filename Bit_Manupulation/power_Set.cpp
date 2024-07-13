#include<bits/stdc++.h>
using namespace std;

    void powerSet(int arr[],int n){

        vector<vector<int>> ans;
        int size = 1<<n;
        for(int i = 0;i<size;i++){
            vector<int> vec;
            for(int j = 0;j<n;j++){
                if(i &(1<<j)){
                    vec.push_back(arr[j]);
                }
            }
            ans.push_back(vec);
        }
       int a = ans.size();
        for (int i = 0; i < a; i++) {
        for (int j = 0; j < ans[i].size(); j++) {
            cout << ans[i][j] << " ";
        }
        cout << endl; // Print newline after each set
    }

    }


int main(){

    int arr[] = {1,2,3};
    int n  = sizeof(arr)/sizeof(arr[0]);
    powerSet(arr, n);
    
   

    return 0;
}


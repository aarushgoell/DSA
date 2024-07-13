#include<bits/stdc++.h>
using namespace std;

    int Minflips(vector<int> arr, int n){

        int count = 0;
        int maxcount = 0;
        int firstindex = 0;
        for(int i = 0;i<n;i++){
            if(arr[i] != 1 && count == 0){
                count++;
                maxcount++;
                firstindex = i;
            }
            else{
                if(count !=0){
                cout<<firstindex<<" "<<i-1<<endl;
                }
                count = 0;
            }
        
        }   
        
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
    cout<<Minflips(vec,n);

    return 0;
}

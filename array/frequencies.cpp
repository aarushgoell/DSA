#include<bits/stdc++.h>
using namespace std;

    void frequencies(vector<int> arr, int n){

        int count = 0;
        int element = -1;
        for(int i = 0;i<n;i++){
            if(element != arr[i]){
                if(count!= 0){
                cout<<element<<" "<<count<<endl;
                }
                element = arr[i];
                count = 1;
            }
            else{
                count++;
            }
        }
        cout<<element<<" "<<count<<endl;    

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
   frequencies(vec,n);

    return 0;
}

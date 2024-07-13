#include<bits/stdc++.h>
using namespace std;


    // First we have to find the kadane Algo sum for normal array
    // Then we will calculate the minimum subbaray sum and subt it from the total sum of the array that will be the max circular sub array sum 

    int calculatingkadane(vector<int> arr, int n){
        int sum = 0;
        int maxsubsum = 0;
        for(int i = 0;i<n;i++){
            sum += arr[i];
            if(sum<0){
                sum = 0;
            }
            maxsubsum = max(sum, maxsubsum);
        }
        return maxsubsum;
    }


    int maxCircularSubarSum(vector<int> arr, int n){

    int maxsubsum =  calculatingkadane(arr,n);
    if(maxsubsum<0)return maxsubsum;
    int sum = 0;
    for(int i = 0;i<n;i++){
        sum += arr[i];
        arr[i] = - arr[i];
    }
    int circularsum = sum + calculatingkadane(arr,n);
    return max(circularsum,maxsubsum);


        
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
    cout<<maxCircularSubarSum(vec,n);

    return 0;
}




// My code\

#include<bits/stdc++.h>
using namespace std;


    // First we have to find the kadane Algo sum for normal array
    // Then we will calculate the minimum subbaray sum and subt it from the total sum of the array that will be the max circular sub array sum 


    int maxCircularSubarSum(vector<int> arr, int n){

        int totalsum = 0;
        int sum = 0;
        int maxsubsum = 0;
        int minsubsum = 0;
        for(int i = 0;i<n;i++){
            sum += arr[i];
            if(sum<0){
                sum = 0;
            }
            maxsubsum = max(sum, minsubsum);
            totalsum += arr[i];
        }
        sum = 0;
        for(int i = 0;i<n;i++){
            sum += arr[i];
            if(sum>0){
                sum = 0;
            }
            minsubsum = min(sum,minsubsum);
        }
        int finalcircularsum = totalsum + -minsubsum;

        return max(maxsubsum,finalcircularsum);

        
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
    cout<<maxCircularSubarSum(vec,n);

    return 0;
}


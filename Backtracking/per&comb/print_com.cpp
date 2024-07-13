#include<bits/stdc++.h>
using namespace std;

    void printCombinations(int index,vector<char>& placing,int count,int n,int r){


        if(index == n){
            if(count == r){
                for(auto ch : placing){
                    cout<<ch<<" ";
                }
                cout<<endl;
            }
            return;;
        }


        placing[index] = 'i';
        printCombinations(index+1,placing,count+1,n,r);
        placing[index] = '-';

        printCombinations(index+1,placing,count,n,r);
 

    }




int main(){
    
    int n = 4;
    int r = 2;

    vector<char> placing(n,'-');
    printCombinations(0,placing,0,n,r);



    return 0;
}




#include<bits/stdc++.h>
using namespace std;

    int settleitems(int index,string word,vector<int> countboxes,int boxes){




        for(int i = 0;i<boxes;i++){
            if(countboxes[i] == '-'){
                countboxes[i] = word[index];
                settleitems(index+1,countboxes,boxes);
                countboxes[i] = 0;
            }
        }

    }

int main(){
    
    string word = "abc";
    boxes = 2;
    vector<char> countboxes(boxes,'-');
    settleitems(0,word,countboxes,boxes);
    








   

    return 0;
}


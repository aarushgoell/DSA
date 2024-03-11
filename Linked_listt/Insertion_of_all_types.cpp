// Below is Insertion at the beginning is constant time operation  O(1);

#include<bits/stdc++.h>
using namespace std;

struct node
{
    int data;
    node *next;
    node(int x){
        data = x;
        next = NULL;
    }

};

node *insertion(node *head, int x){
    node *temp = new node(x);
    temp->next = head;
    return temp;
}

int main(){

    node *head = NULL;
    head = insertion(head,10);
    head = insertion(head,20);
    head = insertion(head,30);
    cout<<head->data;
    
    return 0;
}

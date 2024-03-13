#include<bits/stdc++.h>
using namespace std;
    struct node
    {
        int data;
        node *prev;
        node *next;
        node(int x){
            data = x;
            prev = NULL;
            next = NULL;
        }
    };

int main(){

    new *head = new node(10);
    new *temp = new node(20);
    head->next = temp;
    temp->prev = head;
    
    new *temp2 = new node(30);
    temp->next = temp2;
    temp2->prev = temp;
    
    
    return 0;
}


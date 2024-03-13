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

    node *insertion_at_end(node *head, int x){
        node *temp = new node(x);
         if(head == NULL){
            return temp;
         }
        node *curr = head;
        while(curr->next!= NULL){
            curr = curr->next;
        }
        curr->next = temp;
        temp->prev = curr;
        return head;
    }

int main(){

    node *head = new node(10);
    node *temp = new node(20);
    head->next = temp;
    temp->prev = head;

    node *temp2 = new node(30);
    temp->next = temp2;
    temp2->prev = temp;
    
    // If there is no node present then the head will be NULL 
    // node *head = NULL;

    // Insert a new node with value 5 at the beginning of the list
    head = insertion_at_end(head, 5);

    // Print the doubly linked list
    node *current = head;
    while (current != NULL) {
        cout << current->data << " ";
        current = current->next;
    }
    cout << endl;
    
    
    return 0;
}


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

    node *reverse(node *head){

        if(head == NULL || head->next == NULL)return head;
        node *prev = NULL,*curr = head;
         while (curr != NULL)
         {
            prev = curr->prev;
            curr->prev = curr->next;
            curr->next = prev;
            curr = curr->prev;
         }
         return prev;
         
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
    head = reverse(head);

    // Print the doubly linked list
    node *current = head;
    while (current != NULL) {
        cout << current->data << " ";
        current = current->next;
    }
    cout << endl;
    
    
    return 0;
}


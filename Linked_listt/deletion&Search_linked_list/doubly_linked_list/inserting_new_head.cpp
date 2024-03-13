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

    node *insertion_at_beginning(node *head, int x){
        node *temp = new node(x);
        temp->next = head;
        if(head != NULL){
        head->prev = temp;
        }
        return temp;
    }

int main(){

    node *head = new node(10);
    node *temp = new node(20);
    head->next = temp;
    temp->prev = head;

    node *temp2 = new node(30);
    temp->next = temp2;
    temp2->prev = temp;

    // Insert a new node with value 5 at the beginning of the list
    head = insertion_at_beginning(head, 5);

    // Print the doubly linked list
    node *current = head;
    while (current != NULL) {
        cout << current->data << " ";
        current = current->next;
    }
    cout << endl;
    
    
    return 0;
}


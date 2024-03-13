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

   node *deletion(node *head){
    if(head == NULL){
        return head;
    }
    node *temp = head->next;
    delete head;
    return temp;
   }


int main(){

     // Create a linked list with some nodes
    node *head = new node(1);
    head->next = new node(2);
    head->next->next = new node(3);

    cout << "Original list: ";
    // Print the original list
    node *temp = head;
    while (temp != nullptr) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;

    // Delete the head node
    head = deletion(head);

    cout << "List after deleting head node: ";
    // Print the modified list
    temp = head;
    while (temp != nullptr) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;

    return 0;
}
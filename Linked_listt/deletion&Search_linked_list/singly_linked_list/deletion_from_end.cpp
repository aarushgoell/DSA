// Time complexity of this solution is O(N)

#include<bits/stdc++.h>
using namespace std;

struct node {
    int data;
    node *next;
    node(int x) {
        data = x;
        next = NULL;
    }
};

node* deletionfromend(node* head) {
    if (head == NULL || head->next == NULL) {
        delete head; // Delete the only node or nullptr
        return nullptr; // Return nullptr since the list is now empty
    }

    node* curr = head;
    while (curr->next->next != NULL) {
        curr = curr->next;
    }
    delete curr->next; // Delete the last node
    curr->next = NULL; // Set the next pointer of the second last node to nullptr
    return head; // Return the head of the modified list
}

int main() {
    // Create a linked list with some nodes
    node* head = new node(1);
    head->next = new node(2);
    head->next->next = new node(5);
    head->next->next->next = new node(7);

    cout << "Original list: ";
    // Print the original list
    node* temp = head;
    while (temp != nullptr) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;

    // Delete the last node
    head = deletionfromend(head);

    cout << "List after deleting last node: ";
    // Print the modified list
    temp = head;
    while (temp != nullptr) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;

    return 0;
}

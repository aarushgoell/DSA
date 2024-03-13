// Iterative Linked list Time complexity is O(n) and space complety is O(1);

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

   int search(node *head, int x){
    int pos = 1;
    node *curr = head;
    while(curr != NULL){
        if(curr->data == x){
            return pos;
        }
        else{
            pos++;
            curr = curr->next;
        }
    }
    return -1;
   
   }

int main(){

     // Create a linked list with some nodes
    node *head = new node(1);
    head->next = new node(2);
    head->next->next = new node(3);

    // Searching in linked list
     // Value to search for
    int x = 1;

    // Searching in linked list
    int position = search(head, x);

    if (position != -1) {
        cout << "Value " << x << " found at position " << position << endl;
    } else {
        cout << "Value  not found in the list" << endl;
    }

   

    return 0;
}


// Recursive search ime complexity is O(n) and Auxilary space  complety is O(n);




// Iterative Linked list 

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

   int search(node *head, int x){
   if(head == NULL){
    return -1;
   }
   if(head->data == x){
    return 1;
   }
   else{
    int res = search(head->next,x);
    if(res == -1){
        return -1;
    }
    return (res + 1);
    }
   
}

int main(){

     // Create a linked list with some nodes
    node *head = new node(1);
    head->next = new node(2);
    head->next->next = new node(3);

    // Searching in linked list
     // Value to search for
    int x = 5;

    // Searching in linked list
    int position = search(head, x);

    if (position != -1) {
        cout << "Value " << x << " found at position " << position << endl;
    } else {
        cout << "Value  not found in the list" << endl;
    }

   

    return 0;
}

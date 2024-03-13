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

// Insertion at the end


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

node *insertEnd(node *head, int x){
    node *temp = new node(x);
    if(head == NULL){
        return temp;
    }
    node *curr = head;
    while(curr->next != NULL){
        curr = curr->next;
    }
    curr->next = temp;
    return head;
}

int main(){

   node *head = NULL;
   head = insertEnd(head, 10);
   head = insertEnd(head, 20);
   head = insertEnd(head, 30);
   node *curr = head;
   while(curr->next != NULL){
    curr = curr->next;
   }
   cout<<curr->data<<" ";
   
    return 0;
}

// Insertion at a given position in linkedList


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

node *insertGivenPosition(node *head, int x, int pos
){
    node *temp = new node(x);
    if(pos == 1){
        temp->next = head;
        return temp;
    }
    node *curr = head;               
    for(int i = 0;i<pos-2 && curr != NULL ;i++){
        curr = curr->next;
    }
    if(curr == NULL){
        return head;
    }
    temp->next = curr->next;
    curr->next = temp;
    return head;
}

int main(){

   node *head = NULL;
    head = insertGivenPosition(head, 10, 1);
    head = insertGivenPosition(head, 20, 2);
    head = insertGivenPosition(head, 30, 5);
    while(head != NULL){
        cout<<head->data<<" ";
         head = head->next;
    }
   
    return 0;
}




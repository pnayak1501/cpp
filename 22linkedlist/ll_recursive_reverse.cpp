// LinkedList recursive reverse

#include <iostream>
#include <bits/stdc++.h>

using namespace std;

class node{
    public: int data;
    node* next;

    node(int val){
        data = val;
        next = NULL;
    }
};

void insertAtHead(node* &head, int val){

    node* n = new node(val);
    n->next = head;
    head = n;

}

void insertAtTail(node* &head, int val){ // pass by reference as we are modifying the linkedlist

    node* n = new node(val);

    if(head == NULL){
        head = n;
        return;
    }

    node* temp = head;
    while(temp->next!=NULL){
        temp = temp->next;
    }
    temp->next = n;

}

bool search(node *head, int key){
    node* temp = head;
    while(temp!=NULL){
        if(temp->data == key){
            return true;
        }
        temp = temp->next;
    }
    return false;
}

void display(node* head){ // pass by value as we are not modifying the linkedlist, and we are just accessing the linkedlist
    node* temp = head;
    while(temp!=NULL){
        cout<<temp->data<<"->";
        temp = temp->next;
    }
    cout<<"NULL"<<endl;
}

void deleteAtHead(node* &head){
    node* todelete = head;
    head = head->next;
    delete todelete;    
}


void deletion(node* &head, int val){

    if(head == NULL){
        return;
    }
    if(head->next == NULL){
        deleteAtHead(head);
        return;
    }

    node* temp = head;
    while(temp->next->data != val){
        temp = temp->next;
    }
    node* todelete = temp->next;
    temp->next = temp->next->next;
    delete todelete;

}

void reverse(node* &head){
    node* prevptr = NULL;
    node* currptr = head;
    node* nextptr = head;

    while(currptr!=NULL){
        nextptr = currptr->next;
        currptr->next = prevptr;
        prevptr = currptr;
        currptr = nextptr;
    }
    head = prevptr;
}

node* reverseRecursive(node* &head){

    if(head == NULL || head->next == NULL){
        return head;
    }

    node* newhead = reverseRecursive(head->next);
    head->next->next = head;
    head->next = NULL;

    return newhead;
}


int main() {

    node* head = NULL;
    insertAtTail(head,1);
    insertAtTail(head,2);
    insertAtTail(head,3);
    insertAtTail(head,4);
    display(head);
    node* newhead = reverseRecursive(head);
    display(newhead);    
    return 0;

}

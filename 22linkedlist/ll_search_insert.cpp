// LinkedList insertion and search

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


int main() {

    node* head = NULL;
    insertAtTail(head,1);
    insertAtTail(head,2);
    insertAtTail(head,3);
    display(head);
    insertAtHead(head,4);
    display(head);
    cout<<search(head, 4);
    return 0;

}

// k-append 

#include <iostream>
#include <bits/stdc++.h>

using namespace std;

class node{
    public: int data;
    node* prev;
    node* next;

    node(int val){
        data = val;
        prev = NULL;
        next = NULL;
    }
};

void insertAtHead(node* &head, int val){
    
    node* n = new node(val);
    n->next = head;
    if(head!=NULL){
        head->prev = n;
    }
    head = n;

}

void insertAtTail(node* &head, int  val){

    if(head==NULL){
        insertAtHead(head, val);
        return;
    }

    node* n = new node(val);
    node* temp = head;

    while(temp->next!=NULL){
        temp = temp->next;
    }
    temp->next = n;
    n->prev = temp;

}

int length(node* head){
    node* temp = head;
    int count = 0;
    while(temp!=NULL){
        count++;
        temp = temp->next;
    }
    return count;
}

node* kappend(node* &head, int k){

    node* newHead;
    node* newTail;
    node* tail = head;

    int l = length(head);
    k = k%l;
    int count = 1;
    while(tail->next!=NULL){
        if(count == l-k){
            newTail = tail; 
        }
        if(count==l-k+1){
            newHead = tail;
        }
        tail = tail->next;
        count++;
    }

    newTail->next = NULL;
    tail->next = head;
    return newHead;
    
}

void display(node* head){
    node* temp = head;
    while(temp != NULL){
        cout<<temp->data<<"->";
        temp = temp->next;
    }
    cout<<"NULL"<<endl;
}

int main() {

    node* head = NULL;
    int arr[] = {1,2,3,4,5,6};
    for(int i=0;i<6;i++){
        insertAtTail(head, arr[i]);
    }
    display(head);
    node* newhead = kappend(head, 3);
    display(newhead);
    return 0;

}

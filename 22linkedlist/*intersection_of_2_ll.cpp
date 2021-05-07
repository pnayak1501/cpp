// Intersection point of 2 linked list 

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

int intersection(node* &head1, node* &head2){

    int l1 = length(head1);
    int l2 = length(head2);

    int d = 0;
    node* ptr1;
    node* ptr2;

    if(l1>l2){
        d = l1-l2;
        ptr1 = head1;
        ptr2 = head2;
    }else{
        d = l2-l1;
        ptr1 = head2;
        ptr2 = head1;
    }

    while(d){
        ptr1 = ptr1->next;
        if(ptr1==NULL){
            return -1;
        }
        d--;
    }

    while(ptr1!=NULL && ptr2!=NULL){
        if(ptr1==ptr2){
            return ptr1->data;
        }
        ptr1 = ptr1->next;
        ptr2 = ptr2->next;
    }

    return -1;
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

    node* head1 = NULL;
    node* head2 = NULL;
    insertAtTail(head1,1);
    display(head);

    return 0;

}

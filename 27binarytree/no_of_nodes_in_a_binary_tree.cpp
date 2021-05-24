// Count all the nodes in a binary tree

#include<iostream>
#include "bits/stdc++.h"

using namespace std;

class Node{
        public:
        int data;
        struct Node* left;
        struct Node* right;

        Node(int val){
                data = val;
                left = NULL;
                right = NULL;
        }
};

void countnodes(Node* root){
    if(root==NULL){
        return;
    }

	queue<Node*> q;
	q.push(root);
	q.push(NULL);
	int i=0;
	while(!q.empty()){
		Node* node = q.front();
		q.pop();
		if(node != NULL){
			i++;
			if(node->left!=NULL){
				q.push(node->left);
			}
			if(node->right!=NULL){
				q.push(node->right);
			}
		}
		else if(!q.empty()){
			q.push(NULL);
		}
	}
	cout<<i;      
}

int main(){

    struct Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    root->right->left = new Node(6);
	root->right->right = new Node(7);
    countnodes(root);
    return 0;

}

// Sum of all the nodes in a binary tree

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

int sumofnodes(Node* root){
	if(root==NULL){
		return 0;
	}
	return root->data + sumofnodes(root->left) + sumofnodes(root->right);
}

int main(){

    struct Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    root->right->left = new Node(6);
	root->right->right = new Node(7);
    cout<<sumofnodes(root);
    return 0;

}

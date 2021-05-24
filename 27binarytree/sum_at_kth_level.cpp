// Sum of nodes at kth level

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

void sumatkthlevel(Node* root, int k){
    if(root==NULL){
        return;
    }

	queue<Node*> q;
	q.push(root);
	q.push(NULL);
	int i=0;
	while(i!=k){
		Node* node = q.front();
		q.pop();
		if(node != NULL){
			if(node->left!=NULL){
				q.push(node->left);
			}
			if(node->right!=NULL){
				q.push(node->right);
			}
		}
		else if(!q.empty()){
			q.push(NULL);
			i++;
		}
	}
	int sum = 0;
	while(!q.empty() && q.front()!=NULL){
		sum = sum + q.front()->data;
		q.pop();
	}
	cout<<sum;       
}

int main(){
	int k;
	cin>>k;
    struct Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    root->right->left = new Node(6);
	root->right->right = new Node(7);
    sumatkthlevel(root, k);
    return 0;

}

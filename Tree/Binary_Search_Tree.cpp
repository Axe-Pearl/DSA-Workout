#include<iostream>
using namespace std;

class Node{
	public:
	int data;
	Node *left, *right;
};

Node* create(int value){
	Node* node = new Node();
	node->data = value;
	node->left = NULL;
	node->right = NULL;
	return node;
}
 
Node* insertion(Node* root, int value){
	if(root == NULL){
		return create(value);
	}
	if(value<root->data){
		root->left = insertion(root->left,value);
	}
	else{
		root->right = insertion(root->right,value);
	}
	return root;
}

void inorder(Node* root){
	if(root == NULL){
		return;
	}
	inorder(root->left);
	cout<<root->data<<" ";
	inorder(root->right);
}

int main(){
	Node* root = NULL;
	root = insertion(root, 45);  
  root = insertion(root, 30);  
  root = insertion(root, 50);  
  root = insertion(root, 25);  
  root = insertion(root, 35);  
  root = insertion(root, 45);  
  root = insertion(root, 60);  
  root = insertion(root, 4);  
  inorder(root);
}

//Implementing Binary tree

#include<iostream>
using namespace std;

class Node{
  public:
	int data;
	Node* left;
	Node* right;

	Node(int value){
		data = value;
		left = NULL;
		right = NULL;
	}
};


int main(){
	Node *root = new Node(1);
	
//	          1 
//	         / \
//		  NULL  NULL
	
		
	root->left  = new Node(2);

//	          1	          
//	         / \
//		    2  NULL
//	       / \
//	    NULL  NULL

	root->right = new Node(3);
//	            1	          
//	       /          \
//		 2              3
//	   /   \          /   \
//	 NULL  NULL   NULL  NULL
	
	root->left->left = new Node(4);
    
//	            1	          
//	       /          \
//		 2              3
//	   /   \          /   \
//	 4    NULL        NULL  NULL
//   /     \
// NULL    NULL
    
}

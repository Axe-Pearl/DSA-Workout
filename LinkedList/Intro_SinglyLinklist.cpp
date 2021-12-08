
//Introduction to Linkedlist
//linkedlist --> *singly linked list, doubly linked list, circular linkedlist

//pattern - node+pointer->node1+pointer->node2+pointer->NULL

#include<iostream>
using namespace std;

class Node{
	public:
		int data;
	    Node* next;
};

void display(Node* head){      
	Node* temp = head;
	
	while(temp!=NULL){
		cout<<temp->data<<" ";
		temp = temp->next;
	}
}

int main(){
   Node* head = NULL;
   Node* first = NULL;
   Node* second = NULL;
   
   head = new Node();
   first = new Node();
   second = new Node();
   
   head->data = 1;
   head->next = first;
   
   first->data = 2;
   first->next = second;
   
   second->data = 3;
   second->next = NULL;
   
   
   
   display(head);
   
}

#include<iostream>
using namespace std;

class Node{
	public:
		int data;
		Node* next;
}*head = NULL;

 // function to create a linkedlist
Node*  CreateLinkedlist(int arr[],int n){
	Node* prev = new Node();
	for(int i=0;i<n;i++){
	     if(i == 0){
	     	head = new Node();
	     	head->data = arr[i];
	     	head->next = NULL;
	     	prev = head; 
		 }
		 else{
		    Node* temp = new Node();
		    temp->data = arr[i];
		    temp->next = NULL;
		    prev->next = temp;
		    prev = temp;
		 }
		 
	}
}

void InsertNode(int value, int pos){
	cout<<"value: "<<value<<" pos: "<<pos<<endl;
	Node* last  = head;
	Node* temp = new Node();
	Node* prev = head;
	int count  = 1;               
	while(last->next!=NULL){   
		last = last->next;
		count++;
	}
	
	if(pos<1 || pos>count+1){
		cout<<"Error: Your input for position exceed the range,Enter between 1 to "<<count+1;
	}
	//To insert Node at first position 
	if(pos == 1){
		temp->data = value;
		temp->next = head;
		head = temp;
	}
	//To insert Node at last position
	else if(pos == count+1){
		temp->data = value;
		temp->next = NULL;
		last->next = temp;
		last = temp;
	}
	
	// To insert node in between 
	else{   
	   count = 0;   
	   while(count!=pos-2){      
	   	 prev = prev->next;
	   	 count++;
	   }
	   temp->data = value;
	   temp->next = prev->next;
	   prev->next = temp;
	}
}


void display(Node* head){
	Node* temp = head;
	cout<<"Linked list is :\n";
	while(temp!=NULL){
		cout<<temp->data<<" ";
		temp = temp->next; 
	}
}
int main(){
	  int n;
	  cout<<"Enter number of Nodes you want to create: ";
	  cin>>n;
	  int nodes[n];
	  cout<<"\nEnter value for each Node:\n ";
	  for(int i= 0;i<n;i++){
	  	cin>>nodes[i];
	  }
	  CreateLinkedlist(nodes,n); 
	  int value,pos;
	  cout<<"Enter value of Node you want to add:";
	  cin>>value;
	  cout<<"Enter position of Node where you want to add:";
	  cin>>pos;
	  InsertNode(value,pos);
	  display(head);
    
}

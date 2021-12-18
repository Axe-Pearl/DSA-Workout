#include<iostream>
using namespace std;

class stack{
	int size;
	int top;
	int *s;
	public:
		stack(int size);
		void push(int x);       
		int pop();             
		int peek(int index);  
		int stacktop();      // function to get value of top index
		
		bool isEmpty();     
		bool isFull();	   
		
		void display();    
};

//constructor
stack::stack(int size){
	this->size = size;
	top = -1;
	s = new int[size];
}

//function to check is stack full or not
bool stack::isFull(){
	if(top == size-1){
		return 1;
	}
	return 0;
} 

//function to check is stack empty or not
bool stack::isEmpty(){
	if(top == -1){
		return 1;
	}
	return 0;
}

// function to push value to stack
void stack:: push(int x){
	if(isFull()){
		cout<<"Stack overflow,size limit exceeds \n";
	}
	else{
		top++;
	    s[top] = x;
	}
}

//function to remove from stack
int stack:: pop(){
	if(isEmpty()){
		cout<<"Stack underflow, stack is already empty";
	}
	else{
	 int x = s[top];
	 top--;
	 return x;
	}
	
}

// function to get value of given index
int stack:: peek(int index){
	if(index<0 || index>top){
		return 0;
	}
	return s[index];
}

int stack:: stacktop(){
	if(isEmpty()){
		return -1;
	}
	return s[top];
}


// function to display stack
void stack::display(){
	if(isEmpty()){
		cout<<"Stack is empty \n";
	}
	for(int i=top;i>=0;i--){
		cout<<s[i]<<" ";
	}
	cout<<endl;
}


int main(){
	int size = 3;
	cout<<"Enter size of your array: \n";
	cin>>size;
	stack s(size); //giving size  to array provided by user that will implement our stack
	int arr[size];
	cout<<"Enter values to be added in stack: \n";
	for(int i = 0;i<size;i++){
		cin>>arr[i];
		s.push(arr[i]);
	}
	s.display();
	s.pop();
	s.display();	
	cout<<s.stacktop(); // top value in stack;
	cout<<endl;
	cout<<s.peek(1);  //value at index 1
	
}

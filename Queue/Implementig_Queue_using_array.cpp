#include<iostream>
using namespace std;


class Queue{
	int rear, front;
	int size;
	public:
		int *arr;
		Queue(int size);
		
		bool isFull();
		bool isEmpty();
		
		void Enqueue(int value);
		int Dequeue();
		
		void display();
		
};

//constructor
Queue::Queue(int size){
	this->size = size;
	rear = front = -1;
	arr = new int[size];
}

//funtion to chek Queue is full or not
bool Queue::isFull(){
	if(rear == size-1){
		return true;
	}
	return false;
}

//funtion to chek Queue is empty or not
bool Queue::isEmpty(){
	if(front == rear){
		return true;
	}
	return false;
}

//function to insert value in Queue rear
void Queue:: Enqueue(int value){
	if(isFull()){
		cout<<"Overflow \n";
		return;
	}
	
	// increasing index and inserting value 
	rear++; 
	arr[rear] = value;
}

//function to remove value from front
int Queue::Dequeue(){
	if(isEmpty()){
		cout<<"Underflow \n";
	}
	else{
	    //increasing index of front from where we need to show Queue
		front++;
	    return arr[front];
	}
}

//function to display Queue
void Queue::display(){
	int tempFront = front+1;
	while(tempFront<size){
		cout<<arr[tempFront]<<" ";
		tempFront++;
	}
}


int main(){
	Queue q(5);
	
	//insertion in Queue
	q.Enqueue(1);
	q.Enqueue(2);
	q.Enqueue(3);
	q.Enqueue(4);
	q.Enqueue(5);
	//displaying before deletion
	q.display();
	cout<<endl;
	q.Dequeue();
	q.Dequeue();
    //displaying after two deletion
	q.display();
}


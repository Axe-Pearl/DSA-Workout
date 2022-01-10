// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
class LL{
    public:
    int size;
    class Node{
        public:
         int value;
         Node* next;
         Node(){
             this->value = 0;
             this->next = NULL;
         }
         Node(int value){
             this->value = value;
             this->next = NULL;
         }
         Node(int value, Node* next){
             this->value  = value;
             this->next = next;
         }
    };
    Node* head;
    Node* tail;
    LL(){
        this->size = 0;
    }
    
    void insertFirst(int value){
        Node* node = new Node(value, head);
        head = node;
        if(tail == NULL){
            tail = head;
        }
        size+=1;
    }
    
    void insertLast(int value){
        if(head == NULL){
            insertFirst(value);
            return;
        }
        Node* node = new Node(value);
        tail->next = node;
        tail = node;
        size++;
    }
    
    void insert(int value,int index){
        if(index == 0){
            insertFirst(value);
            return;
        }
        if(index == size-1){
            insertLast(value);
            return;
        }
        Node* temp = head;
        for(int i = 1;i<index;i++){
            temp = temp->next;
        }
        Node* node = new Node(value,temp->next);
        temp->next = node;
        size++;
    }
    void insertRec(int value,int index){
        head = insertRec(value,index,head);
    }
    Node* insertRec(int value,int index,Node* curr_node){
        if(index == 0){
            Node* temp = new Node(value,curr_node);
            size++;
            return temp;
        }
        index--;
        curr_node->next = insertRec(value,index,curr_node->next);
        return curr_node;
    }
    
    
    
    
    
    
    void display(){
        Node* temp = head;
        while(temp!=NULL){
            cout<<temp->value<<" ";
            temp = temp->next;
        }
    }
};


int main() {
    LL* list= new LL();
    list->insertFirst(1);
    list->insertFirst(2);
    list->insertFirst(3);
    list->insertFirst(4);
    list->insertLast(0);
    list->insertLast(-1);
    list->insert(5,0);
    list->insert(-2,6);
    list->insert(88,2);
    
    //inserting values in linked list using recursion
    list->insertRec(10,2);
    list->insertRec(20,1);
    list->display();
    cout<<endl<<"size = "<<list->size;
    return 0;
}

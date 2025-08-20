// Implementation of Queues using Linked List
#include<iostream>
using namespace std;
class Node{
    // node class for queue
public:
       int data;
       Node* next;
       //constructor 
       Node(int data){
        this->data = data;
        this->next = NULL;
       }
};
class Queue{
    private:
    Node *rear,*front;
    public:
    Queue(){
        front = rear = NULL;
    }
    void Enqueue(int x){
        Node* temp = new Node(x);
        if(rear == NULL){
            front = rear = temp;
            return;
        }
        rear->next = temp;
        rear = temp;
    }
    void deQueue(){
        if(front == NULL){
            cout<<"Queue is Empty"<<endl;
            return;
        }
        Node* OldFront = front;
        Node = front->next;
        if(front == NULL){
            rear = NULL;
        }
        delete OldFront;
    }
    void display(){
        if(front == NULL){
            cout<<"queue is empty"<<endl;
            return;
        }
        Node* temp = front;
        while(temp!=NULL){
            cout<<temp->data<<" ";
            temp = temp->next;
        }
        cout<<endl;
    }
};
int main(){
    Queue q;
    q.Enqueue(10);
    q.Enqueue(20);
    q.Enqueue(30);
    cout<<"Queue after EnQueue operations: "<<endl;
    q.display();
    q.deQueue();
    q.display();
    return 0;
}
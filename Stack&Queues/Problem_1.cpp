//Implementation of Stack Using Linked List in C++
#include<iostream>
using namespace std;
struct Node{
    int data;
    Node* next;
}
Node * top;
void push(int data){
    Node * temp = new Node();
    if(!temp){
        cout<<"Stack Overflow"<<endl;
    }
    temp -> data = data;
    temp -> next = top;
    temp = top;
}
int isEmpty(){
    return top == NULL;
}
int peek(){
    if(!isEmpty()){
        return top->data;
    }
    else{
        exit(1);
    }
}
void pop(){
    Node * temp;
    if(top == NULL){
        cout<<"Stack Underflow"<<endl;
        exit(1);
    }
    else{
        temp = top;
        top = top->next;
        free(top);
    }
}
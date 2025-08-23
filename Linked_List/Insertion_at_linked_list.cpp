#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node * next;
    Node(int data){
        this->data = data;
        this->next = NULL;
    }
};
void InsertionAtHead(Node* &head, int data){
    Node * node1 = new Node(data);
    node1->next = head;
    head = node1;
}
void printLinkedList(Node* head){
    while(head != NULL){
        cout << head->data << " ";
        head = head->next;
    }
    cout << endl;
}
int main(){
    Node * node1 = new Node(10);
    cout << "Initial Linked List: "; 
    printLinkedList(node1);
    InsertionAtHead(node1, 20);
    cout << "Linked List after insertion at head: ";
    printLinkedList(node1);
    return 0;
}
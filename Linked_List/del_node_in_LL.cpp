// we will be writing a code for deleting a node in a linked list 
#include<iostream>
using namespace std;
struct Node{
    int data;
    Node* next;
    Node(int val): data(val), next(nullptr){}
}
Node *delete_Node_in_Linked_list(struct Node * node_to_delete){
    if (node_to_delete == nullptr || node_to_delete->next == nullptr) {
        return nullptr; 
    }
    node_to_delete->data = node_to_delete->next->data;
    node_to_delete->next = node_to_delete->next->next;
    return node_to_delete;
}
void printLinkedList(Node* head){
    while(head){
        cout << head->data << " ";
        head = head->next;
    }
    cout << endl;
}
int main(){
    Node *head = new Node(1);
    head->next = new Node(2);
    head->next->next = new Node(3);
    head->next->next->next = new Node(4);
    head->next->next->next->next = new Node(5);
    cout << "Original Linked List: " << endl;
    printLinkedList(head);
    delete_Node_in_Linked_list(head->next->next); 
    cout << "Linked List After Deletion: " << endl;
    printLinkedList(head);
    return 0;
}
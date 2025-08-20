<<<<<<< HEAD
=======

>>>>>>> 6df54c26f65c8cc21fa0b929e4f04512d541c7a9
// we will be writing the code for swapping nodes in pairs in a linked list
#include<iostream>
using namespace std;
struct ListNode{
    int data;
    ListNode* next;
    ListNode(int val): data(val), next(nullptr) {}
} ;
ListNode* swapNodesinPairs(ListNode * head){
    if(head == nullptr || head->next == nullptr){
        return head;
    }
    ListNode *first = head;
    ListNode * second = head->next;
    ListNode * temp = swapNodesinPairs(second->next); // Corrected function call
    first->next = temp;
    second->next = first;
    return second;
}
void printLinkedList(ListNode* head){
    while(head){
        cout << head->data << " ";
        head = head->next;
    }
    cout << endl;
}
int main(){
    ListNode *head = new ListNode(1);
    head->next = new ListNode(2);
    head->next->next = new ListNode(3);
    head->next->next->next = new ListNode(4);
    head->next->next->next->next = new ListNode(5);
    cout << "Original Linked List: ";
    printLinkedList(head);
    head = swapNodesinPairs(head);
    cout << "The list after swapping nodes in pairs is : ";
    printLinkedList(head);
    return 0;
}

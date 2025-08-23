// we will be writing a code for finding out the middle element of a linked list
#include<iostream>
using namespace std;
struct ListNode{
    int data;
    ListNode* next;
    ListNode(int val): data(val),next(nullptr){}
};
ListNode* middleofLinkedList(ListNode* head){
    if(head == nullptr){
        return head;
    }
    ListNode * slow = head;
    ListNode * fast = head;
    while(fast != nullptr && fast->next != nullptr){
        slow = slow->next;
        fast = fast->next->next;
    }
    return slow;
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
    ListNode *middle = middleofLinkedList(head);
    cout << "Middle Element of Linked List: " << middle->data << endl;
    return 0;
}
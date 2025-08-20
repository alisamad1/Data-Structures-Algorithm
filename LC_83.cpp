// we will be writing the code for Removing Duplicates from Sorted List
#include<iostream>
using namespace std;
struct ListNode{
    int data;
    ListNode * next;
    ListNode(int val): data(val), next(nullptr){}
};
ListNode * deleteDuplicates(ListNode * head){
    if(head == NULL){
        return NULL;
    }
    ListNode * current = head;
    while(current != NULL){
        if(current->next != NULL && current->data == current->next->data){
            ListNode * nextNode = current->next->next;
            ListNode * nodetodelete = current->next;
            delete nodetodelete;
            current->next = nextNode;
        }
        else{
            current = current->next;
        }
    }
    return head;
}
void printlist(ListNode * head){
    ListNode * temp = head;
    while(temp != NULL){
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}
int main(){
    ListNode * head = new ListNode(1);
    head->next = new ListNode(2);
    head->next->next = new ListNode(2);
    head->next->next->next = new ListNode(3);
    head->next->next->next->next = new ListNode(3);
    head->next->next->next->next->next = new ListNode(4);
    cout << "Original Linked List: ";
    printlist(head);
    head = deleteDuplicates(head);
    cout << "Linked List After Removing Duplicates: ";
    printlist(head);
    return 0;
}
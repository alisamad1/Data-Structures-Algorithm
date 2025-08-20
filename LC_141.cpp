#include<iostream>
using namespace std;
struct ListNode{
    int data;
    ListNode * next;
    ListNode(int val){
        data = val;
        next = NULL;
    }
};
bool hascycle(ListNode * head){
    if(head == NULL){
        return false;
    }
    ListNode * slow = head;
    ListNode * fast = head;
    while(fast->next != NULL && fast->next->next != NULL){
        fast = fast->next->next;
        slow = slow->next;
        if(fast == slow){
            return true;
        }
    }
    return false;
}
int main(){
    ListNode * head = new ListNode(1);
    head->next = new ListNode(2);
    head->next->next = new ListNode(3);
    head->next->next->next = new ListNode(4);
    head->next->next->next->next = new ListNode(5);
    head->next->next->next->next->next = head->next;
    bool isCycle = hascycle(head);
    if(isCycle){
        cout << "The Linked List Contains Cycle. " << endl;
    }
    else{
        cout << "The Linked List Does not contain a Cycle. " << endl;
    }
    return 0;
}
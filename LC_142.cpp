//Linked List Cycle II
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
ListNode *detectCycle(ListNode *head){
    if(head==NULL){
        return false;
    }
    ListNode *fast = head;
    ListNode *slow = head;
    while(fast->next!=NULL && fast->next->next!=NULL){
        fast = fast->next->next;
        slow = slow->next;
        if(fast == slow){
            slow = head;
            if(slow != fast){
                slow = slow->next;
                fast = fast->next;
            }
            return slow;
        }
    }
    return NULL;
}

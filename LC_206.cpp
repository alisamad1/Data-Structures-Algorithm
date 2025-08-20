ListNode* reverseList(ListNode* head) {
    ListNode *prev = NULL, *curr = head, *temp;
    while(curr){
        temp =  curr->next;
        curr->next = prev;
        prev  = curr;
        curr = temp;
    }
    return prev;
}
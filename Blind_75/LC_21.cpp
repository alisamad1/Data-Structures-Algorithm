ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
    ListNode* dummy = new ListNode();
    ListNode * tail = dummy;
    while(l1 != NULL && l2 != NULL){
        if(l1->val < l2-> val){
            tail->next = l1;
            l1 = l1->next;
            tail = tail->next;
        }
        else{
            tail->next = l2;
            l2 = l2->next;
            tail = tail->next;
        }        
    }
    if(l2 == NULL){
        tail->next = l1;
    }
    if(l1 == NULL){
        tail->next = l2;
    }
    return dummy->next;
}
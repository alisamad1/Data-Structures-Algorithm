ListNode* oddEvenList(ListNode* head) {
    if(!head || !(head->next)){
        return head;
    }
    ListNode* h_odd = head;
    ListNode* h_even = head->next;
    ListNode* odd = h_odd;
    ListNode* even = h_even;
    while(even){
        if(even->next){
            odd->next = even->next;
        }
        else{
            odd->next = h_even;
            return h_odd;
        }
        odd = odd->next;
        even->next  = odd->next;
        even = even->next;
    }
    odd->next = h_even;
    return h_odd;
}
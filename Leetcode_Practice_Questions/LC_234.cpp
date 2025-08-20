ListNode* MiddleNode(ListNode *head) {
    ListNode *fast = head;
    ListNode *slow = head;
    while (fast != NULL && fast->next != NULL) {
        fast = fast->next->next;
        slow = slow->next;
    }
    return slow;
}
ListNode* ReverseList(ListNode *head) {
    ListNode *prev = NULL;
    ListNode *curr = head;
    while (curr != NULL) {
        ListNode *temp = curr->next;
        curr->next = prev;
        prev = curr;
        curr = temp;
    }
    return prev;
}
bool compare(ListNode *l1, ListNode *l2) {
    while (l1 != NULL && l2 != NULL) {
        if (l1->val != l2->val) {
            return false;
        }
        l1 = l1->next;
        l2 = l2->next;
    }
    return true;
}
bool isPalindrome(ListNode* head) {
    if (head == NULL || head->next == NULL) {
        return true;
    }
    ListNode *mid = MiddleNode(head);
    ListNode *l2 = ReverseList(mid);
    bool result = compare(head, l2);
    return result;
}
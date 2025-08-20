void deleteNode(ListNode* node) {
    int val = node->next->val;
    node->next = node->next->next;
    node->val = val;
}
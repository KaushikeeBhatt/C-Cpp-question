struct ListNode* addTwoNumbers(struct ListNode* l1, struct ListNode* l2) {
    struct ListNode* result = NULL;
    struct ListNode* tail = NULL;
    int carry = 0;
    
    while (l1 != NULL || l2 != NULL || carry != 0) {
        int sum = carry;
        
        if (l1 != NULL) {
            sum += l1->val;
            l1 = l1->next;
        }
        
        if (l2 != NULL) {
            sum += l2->val;
            l2 = l2->next;
        }
        
        int digit = sum % 10;
        carry = sum / 10;
        
        struct ListNode* node = (struct ListNode*) malloc(sizeof(struct ListNode));
        node->val = digit;
        node->next = NULL;
        
        if (result == NULL) {
            result = node;
            tail = node;
        } else {
            tail->next = node;
            tail = node;
        }
    }
    
    return result;
}
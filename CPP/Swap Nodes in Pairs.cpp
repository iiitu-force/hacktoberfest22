    ListNode* swapPairs(ListNode* head) {
        
//         if(head == NULL || head->next==NULL){
//             return head;
//         }
//         ListNode *p = head;
//         ListNode *q = head->next;
        
//         swap(p->val,q->val);
//         swapPairs(head->next->next);
        
//         return head;
        
    ListNode* temp = head;
    while(temp != NULL && temp->next != NULL)
    {
        swap(temp->val , temp->next->val);
        temp = temp -> next -> next;
    }
    return head;
    }

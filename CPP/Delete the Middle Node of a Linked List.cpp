class Solution {
public:
    ListNode* deleteMiddle(ListNode* head) {
        if(!head || !head->next){return NULL;}
        ListNode* p = head;
        int count = 0;
        while(p!=NULL){
            count++;
            p = p->next;
        }
        int m = count/2 ;
        p = head;
        for(int i =0;i<m-1;i++){
            p=p->next;
        }
        p->next = p->next->next;
        return head;
    }
};

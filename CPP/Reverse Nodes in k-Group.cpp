/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
    ListNode* reverse(ListNode* head, int k,int n) {
        if(n < k || !head) return head;
        ListNode* curr = head;
        ListNode *prev=NULL;
        ListNode *nxt=NULL;
        int c = 0;
        while(curr!=NULL && c<k){
            nxt = curr->next;
            curr->next = prev;
            prev = curr;
            curr = nxt;
            c++;
        }
        
        if(nxt!=NULL){
            head->next = reverse(nxt,k,n-k);
        }
        return prev;
    }
    public:
        ListNode* reverseKGroup(ListNode* head, int k) {
            int count =0;
            ListNode* p = head;
            while(p!=NULL){
                count++;
                p=p->next;
            }
            return reverse(head,k,count);
        }

};

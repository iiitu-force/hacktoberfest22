/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode *pt1 = headA;
        ListNode *pt2 = headB;
        ListNode *ans;
        while(pt2!=NULL){
            pt2->val = -1 * pt2->val;
            pt2 = pt2->next;
        }
        while(pt1!=NULL && pt1->val > 0){
            pt1 = pt1->next;
        }
        ans = pt1;
        pt2 = headB;
        while(pt2!=NULL){
            pt2->val = -1 * pt2->val;
            pt2 = pt2->next;
        }
        return ans;
    }
};

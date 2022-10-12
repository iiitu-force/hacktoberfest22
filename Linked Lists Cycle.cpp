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
    bool hasCycle(ListNode *head) {
        ListNode *pt1 = head;
        ListNode *pt2 = head;
        if(head==NULL)
            return 0;
        while(pt2->next!=NULL){
            pt1 = pt1->next;
            pt2 = pt2->next;
            if(pt2->next!=NULL){
                pt2 = pt2->next;
            }            
            if(pt1==pt2)
                break;
        }
        if(pt1==pt2 && pt2->next!=NULL)
            return 1;
        else
            return 0;
        
    }
};

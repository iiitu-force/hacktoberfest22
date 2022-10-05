class Solution {
public:
    ListNode* rotateRight(ListNode* head, int k) {
        
        if(head==NULL || head->next==NULL ||k==0) 
            return head;
        
        ListNode* temp=head;
        ListNode* res;
           int c=1;
        while(temp->next)
        {
            c++;
            temp=temp->next;
      
            
        }
        cout<<c;
        k=k%c;
    
        k=c-k;
    
        temp->next=head;
        cout<<"\n"<<temp->next->val;
        while(k--)
        {
            temp=temp->next;
             cout<<"\n"<<temp->val;
        }
        head=temp->next;
        temp->next=NULL;
        return head;
        
        
    }
    
    
};

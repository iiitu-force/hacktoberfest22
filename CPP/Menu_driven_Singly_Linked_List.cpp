#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

struct node
{
   int data;
   struct node *link;
};
struct node* createLL(struct node *head)
{
    head = NULL;
    return head;
}

int cntLL(struct node *head)  //count node in LL
{
    struct node *ptr = NULL;
    ptr = head;
    int cnt=0;
    if(ptr==NULL)
    {
        return 0;
    }
    else{
    while(ptr!=NULL)
    {
        cnt++;
        ptr = ptr->link;
    }
    }  
    return cnt;
}
struct node* insertLL(struct node *head, int num,int pos)
{
    int cnt = cntLL(head);

    if(head==NULL)
    {
        struct node *curr = new(node);
        curr->data = num;
        curr->link = NULL;
        head = curr;
        cout<<"Insertion Sucessfull!!\n";
    }
    else if(pos > cnt+1)
    cout<<"Insertion not possible at given position\n";
    else{
    struct node *curr = new(node);
    struct node *prev = head;
    struct node *c = head;
    if(pos==1)   //insertion at beginning
    {
       curr->data = num;
       curr->link = head;
       head = curr;
    }
    else if(pos == cnt+1) //insertion at end
    {
        curr->data = num;
        curr->link = NULL;
        while(c->link != NULL)
         c = c->link;
        c->link = curr;
    }
    else{
     while(pos !=1)
         {
            prev = c;
            c = c->link;
             pos--;
         }
       curr->data = num;
       curr->link = c;
       prev->link = curr;
    }
    cout<<"Insertion Sucessfull!!\n";
    }
    return head;
}
struct node* delLL(struct node **head,int position)
{
    int cnt = cntLL(*head);
    struct node *curr = *head;
     struct node *prev = *head;
     
     if(*head==NULL)
     cout<<"list is empty\n";
     else if(position > cnt)
      {
          cout<<"Given position doesn't exist\n";
      }
     else if(position==1)   //deletion at beginning
     {
         *head = curr->link;
         delete(curr);
         curr = NULL;
         cout<<"Deletion Sucessful!!\n";
     }
     else if(position == cnt)   //deletion at end
     {
         while(curr->link != NULL)
          {
              prev = curr;
             curr= curr->link;
          }
          delete(curr);
          prev->link = NULL;
        cout<<"Deletion Successfull!!\n";
     }
     else
     {
         while(position !=1)
         {
            prev = curr;
            curr = curr->link;
             position--;
         }
         prev->link = curr->link;
         delete(curr);
         curr = NULL;
         cout<<"Deletion Successful!!\n";
    
     }
    return *head;
     
}
void travLL(struct node *head)
{
    struct node *ptr = NULL;
    ptr = head;
    if(ptr==NULL)
    {
        cout<<"LL is empty\n";
    }
    else{
    while(ptr!=NULL)
    {
        cout<<ptr->data<<" ";
        ptr = ptr->link;
    }
    cout<<"\n";
    }
    
    
}

int main()
{
    struct node *head;
    head = createLL(head);
    while(1)
    {
       cout<<"1: Insert an Element\n";
       cout<<"2: Delete an Element\n";
       cout<<"3: Display number of nodes in Linked List\n";
       cout<<"4: Display content of Linked List\n";
       cout<<"5: To Exit\n";
       int c;
       cin>>c;
       int ele,pos;
       switch (c)
       {
       case 1:
           cout<<"Enter element to be inserted: ";
           cin>>ele;
           cout<<"Enter position: ";
           cin>>pos;
          head = insertLL(head,ele,pos);
           break;
       case 2:
         cout<<"Enter position to be deleted: ";
         cin>>pos;
        head =  delLL(&head,pos);
         break;
       case 3:
        cout<<"Total Node/s in Linked List is/are: "<<cntLL(head)<<"\n";
        break;
       case 4:
        travLL(head);
        break;
       case 5:
          cout<<"Program exit successfully!!\n";
          exit(0);
       default:
           cout<<"Wrong seletion\n";
         
       }
    }
    
    return 0;
}
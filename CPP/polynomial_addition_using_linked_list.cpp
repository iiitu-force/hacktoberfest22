#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

struct node
{
   int exp;
   int coeff;
   struct node *link;
};
struct node* createLL(struct node *head)
{
    head = NULL;
    return head;
}

struct node* insertLL(struct node *head, int num,int expo)
{
    struct node *c = head;
    struct node *curr = new(node);
        curr->coeff = num;
        curr->exp = expo;
          curr->link = NULL;
    if(head==NULL || expo>head->exp)
    {
       curr->link = head;
        head = curr;
    }
    else{
        while(c->link != NULL && c->link->exp >= expo)
         c = c->link;
        curr->link = c->link;
        c->link = curr;
    } 
    return head;
}
struct node* cLL(struct node* head)
{
    int n,i;
    int coeff;
    int expo;
    cout<<"Enter number of terms: ";
    cin>>n;
    for(i=0;i<n;i++)
    {
        cout<<"Enter coefficient for term "<<i+1<<": ";
        cin>>coeff;
         cout<<"Enter exponent for term "<<i+1<<": ";
        cin>>expo;

        head = insertLL(head,coeff,expo);
        
    }
    return head;
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
        cout<<ptr->coeff<<"x^"<<ptr->exp;
        ptr = ptr->link;
        if(ptr!=NULL)
        cout<<" + ";
    }
    cout<<"\n";
    }
}
void polyAdd(struct node* head1, struct node* head2)
{
    struct node* ptr1 = head1;
    struct node* ptr2 = head2;
    struct node* head3 = NULL;

    while(ptr1!=NULL && ptr2!=NULL)
    {
        if(ptr1->exp == ptr2->exp)
        {
        head3 = insertLL(head3,ptr1->coeff + ptr2->coeff,ptr1->exp);
        ptr1 = ptr1->link;
        ptr2 = ptr2->link;
        }
        else if(ptr1->exp > ptr2->exp)
        {
             head3 = insertLL(head3,ptr1->coeff,ptr1->exp);
        ptr1 = ptr1->link;
       
        }
        else if(ptr1->exp < ptr2->exp)
        {
             head3 = insertLL(head3,ptr2->coeff,ptr2->exp);
        ptr2 = ptr2->link;
       
        }
       
    }
     while(ptr1!=NULL)
        {
            head3 = insertLL(head3,ptr1->coeff,ptr1->exp);
             ptr1 = ptr1->link;
        }
        while(ptr2 != NULL)
        {
             head3 = insertLL(head3,ptr2->coeff,ptr2->exp);
             ptr2 = ptr2->link;
        }
    cout<<"Added polynomial is: ";
    travLL(head3);
}

int main()
{
   struct node* head1 = NULL;
   struct node* head2 = NULL;
   cout<<"Enter first polynomial\n";
   head1  = cLL(head1);
   cout<<"Enter second polynomial\n";
   head2 = cLL(head2);
   cout<<"First polynomial: ";
   travLL(head1);
   cout<<"Second polynomial: ";
   travLL(head2);
   polyAdd(head1,head2);
    return 0;
}

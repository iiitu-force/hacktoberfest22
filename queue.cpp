#include <bits/stdc++.h>
using namespace std;
#define SIZE 5
typedef long long ll;
struct que
{
    ll a[SIZE];
    ll rear = -1;
    ll front = -1;
    ll s = 0;
};
void enQueue(struct que *q,ll value)
{
   if(q->s == SIZE)
   {
      cout<<"Queue is full!!!\nInsertion not possible\n";
   }
   else
   {
       if(q->front==-1)
       q->front = 0;
       q->rear= (q->rear +1)%SIZE;
       q->a[q->rear]=value;
       q->s++;
       cout<<"Insertion is sucessfull\n";
   }
}
void deQueue(struct que *q)
{
    if(q->s == 0)
     cout<<"Queue is empty!!!\nDeletion not possible\n";
     else
     {
         cout<<"Deleted: "<<q->a[q->front]<<"\n";
         q->front= (q->front+1)%SIZE;
         
         q->s--;
         if(q->s == 0)
         {
             q->rear = -1;
             q->front = -1;
         }
     }
}
void display(struct que *q)
{
    if(q->s == 0)
    cout<<"Queue is empty\n";
    else
    {
        ll i = q->s;
        ll j=q->front;
        while(i--)
      {cout<<q->a[(j)%SIZE]<<" ";
      j++;
      }
        cout<<"\n";
    }
}
int main()
{
    struct que q;
    while(1)
    {
      ll choice,val;
        cout<<"1. Insertion\n";
        cout<<"2. Deletion\n";
        cout<<"3. Display\n";
        cout<<"4. Exit\n";
      cin>>choice;
      switch (choice)
      {
      case 1:
         cout<<"Enter value to be inserted: ";
         cin>>val;
         enQueue(&q,val);
          break;
      case 2:
        deQueue(&q);
        break;
      case 3:
         display(&q);
         break;
    case 4:
    cout<<"Program ended\n";
    exit(0);
      default:
          cout<<"Wront selection!!  Try again\n";
      }
    }
}
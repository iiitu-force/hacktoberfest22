#include <iostream>

using namespace std;

class node
{
  public:
  int data;
  node *next;

  node(int data)
  {
    this -> data = data;
    next = NULL;
  }

};

node* enter()
{
  int data;
  cin>>data;
  node *head = NULL;
  node *tail = NULL;

  while(data != -1)     //assuming terminating condition to be when data == 1
  {
    node *newnode = new node(data);   //creating a dynamically allocated node because
                                      //statically created node will go out of scope after
                                      //each iteration
    if(head == NULL)
    {
      head = newnode;   //storing address of head
      tail = newnode;
    }

    else
    {
      tail -> next = newnode;
      tail = tail -> next;  
    }

    cin>>data;
  }

  return head;

}


void remove_dup(node* head)
{
  node*temp = head;
  int count=0;
  node *toDel;

  while(temp->next!=NULL)
  {

    if((temp->data)==(temp->next->data))
    {
        toDel=temp->next->next;
        free(temp->next);
        temp->next=toDel;

    }
    else
    {
      temp=temp->next;
    }
  }
}

void display(node *head)
{
  node *temp = head;
  while(temp!=NULL)
  {
    cout<<temp->data<<" ";
    temp = temp->next;
  }
}

 int main(int argc, char const *argv[]) {
  /* code */
  node *head = enter();
  display(head);
    cout<<endl;
  remove_dup(head);
  display(head);
   return 0;
}

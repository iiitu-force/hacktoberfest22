#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    Node *lchild;
    int data;
    Node *rchild;
};
Node *root;

Node *create(int *arr, int size)
{
    stack<Node *> st;

    root = new Node;
    root->rchild = nullptr;
    root->data = arr[0];
    root->lchild = nullptr;

    Node *p = root;
    Node *temp;

    int i = 1;
    while (i < size)
    {

        if (p->data > arr[i])
        {
            temp = new Node;
            temp->data = arr[i];
            temp->lchild = nullptr;
            temp->rchild = nullptr;

            p->lchild = temp;
            st.push(p);
            p = temp;
            i++;
        }
        else
        {
            if (!st.empty())
            {
                if (arr[i] > p->data && arr[i] < st.top()->data)
                {
                    temp = new Node;
                    temp->data = arr[i];
                    temp->lchild = nullptr;
                    temp->rchild = nullptr;
                    p->rchild = temp;
                    p = temp;
                    i++;
                }
                else
                {
                    p = st.top();
                    st.pop();
                }
            }
            else
            {
                if (arr[i] > p->data)
                {
                    temp = new Node;
                    temp->data = arr[i];
                    temp->lchild = nullptr;
                    temp->rchild = nullptr;
                    p->rchild = temp;
                    p = temp;
                    i++;
                }
            }
        }
    }
}


void traversal(Node *p)
{
    if (p != nullptr)
    {
        cout << p->data << " ";
        traversal(p->lchild);
        traversal(p->rchild);
    }
}

void inorder(Node *p)
{
    if (p != nullptr)
    {
        inorder(p->lchild);
        cout << p->data << " ";
        inorder(p->rchild);
    }
}



int main()
{

    int preorder[] = {30, 20, 10, 15, 25, 40, 50, 45};

    int totalsize = sizeof(preorder) / sizeof(preorder[0]);
    create(preorder, totalsize);
    traversal(root);
    cout << endl;
    cout << endl;

    cout<<"Inorder of the above BST: ";
    inorder(root);

 


    return 0;
}

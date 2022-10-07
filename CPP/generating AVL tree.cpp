#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    Node *lchild;
    int data;
    Node *rchild;
    int height;
};
    Node* root = nullptr;

class avl
{
public:
    int Height(Node *p);
    Node *insert(Node *p, int value);
    int balance(Node *p);
    Node *lrotation(Node *p);
    Node *rrotation(Node *p);

    void inorder(Node *p);
    void preorder(Node *p);
    int max(int a, int b);
};


int avl ::max(int a, int b)
{
    return (a > b) ? a : b;
}

Node *avl ::lrotation(Node *p)
{
    Node *a = p->rchild;
    Node *b = a->lchild;

    a->lchild = p;
    p->rchild = b;

    // updating heights
    p->height = max(Height(p->lchild), Height(p->rchild)) + 1;
    a->height = max(Height(a->lchild), Height(a->rchild)) + 1;

    // returning new root
    return a;
}

Node *avl ::rrotation(Node *p)
{

    Node *a = p->lchild;
    Node *b = a->rchild;
    a->rchild = p;
    p->lchild = b;

    // updating heights
    p->height = max(Height(p->lchild), Height(p->rchild)) + 1;
    a->height = max(Height(a->lchild), Height(a->rchild)) + 1;

    // returning new root

    return a;
}

int avl ::balance(Node *p)
{
    if (p == nullptr)
    {
        return 0;
    }
    else
        return Height(p->lchild) - Height(p->rchild);
}

int avl ::Height(Node *p)
{
    if (p != nullptr)
    {
        return p->height;
    }
    return 0;
}

Node *avl ::insert(Node *p, int value)
{
    Node *temp;
    if (p == nullptr)
    {
        temp = new Node;
        temp->data = value;
        temp->rchild = nullptr;
        temp->lchild = nullptr;
        temp->height = 1;
        return temp;
    }

    if (value < p->data)
    {
        p->lchild = insert(p->lchild, value);
    }
    else if (value > p->data)
    {
        p->rchild = insert(p->rchild, value);
    }
    else
    {
        return p; // dublicate nodes are not allowed in AVL tree as they are also BST
    }

    // Update Height;

    p->height = 1 + max(Height(p->lchild), Height(p->rchild));
    int isbalance = balance(p);

    if (isbalance > 1 && value < p->lchild->data)
    {
        return rrotation(p);
    }
    if (isbalance > 1 && value > p->lchild->data)
    {
        p->lchild = lrotation(p->lchild);
        return rrotation(p);
    }
    if (isbalance < -1 && value > p->rchild->data)
    {
        return lrotation(p);
    }
    if (isbalance < -1 && value < p->rchild->data)
    {
        p->rchild = rrotation(p->rchild);
        return lrotation(p);
    }

    return p;
}

void avl ::preorder(Node *p)
{
    if (p!=nullptr)
    {
        cout << p->data << " ";
        preorder(p->lchild);
        preorder(p->rchild);
    }
}

void avl ::inorder(Node *p)
{
    if (p!=nullptr)
    {
        inorder(p->lchild);
        cout << p->data << " ";
        inorder(p->rchild);
    }
}

int main()
{
    avl a;
    root = a.insert(root, 10);
    root = a.insert(root, 20);
    root = a.insert(root, 30);
    root = a.insert(root, 40);
    root = a.insert(root, 50);
    root = a.insert(root, 25);

    cout << "Printing preorder and inorder of the above AVL Tree: " << endl;

    cout << "Pre-order: " << endl;
    a.preorder(root);

    cout << endl;
    cout << "In-order" << endl;
    a.inorder(root);

    return 0;
}

#include <bits/stdc++.h>
using namespace std;

struct node
{
    int data;
    struct node *left;
    struct node *right;
};
struct node *root;

// New node creation and Insertion
node *create()
{
    node *p;
    int x;
    cout << "\nEnter data(-1 for no data) :: ";
    cin >> x;
    if (x == -1)
        return NULL;
    p = (node *)malloc(sizeof(node));
    p->data = x;
    cout << "\nEnter left child of " << x;
    p->left = create();
    cout << "\nEnter right child of " << x;
    p->right = create();
    return p;
}

// Traverse Inorder
void traverseInOrder(struct node *temp)
{
    if (temp != NULL)
    {
        traverseInOrder(temp->left);
        cout << " " << temp->data;
        traverseInOrder(temp->right);
    }
}

int main()
{
    root = create();

    if (root != NULL)
    {
        cout << "\nInorder traversal: ";
        traverseInOrder(root);
    }
    else
        cout << "TREE EMPTY!";
}

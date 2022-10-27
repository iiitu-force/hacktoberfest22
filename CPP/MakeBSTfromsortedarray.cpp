//use binary search to find the root and call recursively 
//over left and right of the root
#include <iostream>
#include "BinaryTreeNode.h"
#include <queue>
using namespace std;

BinaryTreeNode<int> *takeInputLevelWise()
{
    int rootData;
    cout << "Enter Root Data" << endl;
    cin >> rootData;
    if (rootData == -1)
        return NULL;
    BinaryTreeNode<int> *root = new BinaryTreeNode<int>(rootData);
    queue<BinaryTreeNode<int> *> pendingNodes;
    pendingNodes.push(root);

    while (pendingNodes.size() != 0)
    {
        BinaryTreeNode<int> *front = pendingNodes.front();
        pendingNodes.pop();
        cout << "Enter Left child of " << front->data << endl;
        int leftChildData;
        cin >> leftChildData;
        if (leftChildData != -1)
        {
            BinaryTreeNode<int> *child = new BinaryTreeNode<int>(leftChildData);
            front->left = child;
            pendingNodes.push(child);
        }
        cout << "Enter Right child of " << front->data << endl;
        int rightChildData;
        cin >> rightChildData;
        if (rightChildData != -1)
        {
            BinaryTreeNode<int> *child = new BinaryTreeNode<int>(rightChildData);
            front->right = child;
            pendingNodes.push(child);
        }
    }
    return root;
}

 BinaryTreeNode<int> * MakeBst(int arr[],int start,int end){
     if(start>end) return NULL;
     int mid = (start + end) / 2;
     BinaryTreeNode<int> *root = new BinaryTreeNode<int>(arr[mid]);
    root->left =MakeBst(arr, start, mid - 1);
    root->right=  MakeBst(arr, mid + 1, end);

    return root;
 }

int main()
{
    // BinaryTreeNode<int> *root = new BinaryTreeNode<int>(1);
    // BinaryTreeNode<int> *node1 = new BinaryTreeNode<int>(2);
    // BinaryTreeNode<int> *node2 = new BinaryTreeNode<int>(3);
    // root->left = node1;
    // root->right = node2;

    // BinaryTreeNode<int> *root = takeinput();
    //BinaryTreeNode<int> *root = takeInputLevelWise();
    BinaryTreeNode<int> *root = new BinaryTreeNode<int>(0);
    int a[7] = {1, 2, 3, 4, 5, 6, 7};
    root=MakeBst(a, 0, 6);
    PrintLevelWise(root);

    delete root;
}

// for input copy paste ->
//  1 2 3 4 5 6 7 -1 -1 -1 -1 8 9 -1 -1 -1 -1 -1 -1
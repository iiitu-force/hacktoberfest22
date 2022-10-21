#include <iostream>
#include "BinaryTreeNode.h"
#include <queue>
using namespace std;

void PrintLevelWise(BinaryTreeNode<int> *root){
    queue<BinaryTreeNode<int> *> pendingNodes;
    pendingNodes.push(root);
    
    while (pendingNodes.size() != 0)
    {
        BinaryTreeNode<int> *front = pendingNodes.front();
        pendingNodes.pop();
            cout << front->data<<":";
       if(front->left!=NULL){
           cout << "L" << front->left->data;
           pendingNodes.push(front->left);
       }
       if(front->right!=NULL){
           cout << "R" << front->right->data;
           pendingNodes.push(front->right);
       }
       cout << endl;
    }
}
//Build a Tree from Inorder and Preorder

BinaryTreeNode<int>* buildHelper(int *in,int *pre,int inS,int inE,int preS,int preE){
//check if it is empty
if(inS > inE) {
    return NULL;
}
//in -> L+R    //pre -> +LR
int rootData = pre[preS];
int LpreS, LpreE, RpreS, RpreE, LinS, LinE, RinS, RinE,rootIndexInorder=-1;
for (int i = inS; i <= inE;i++){
    if(in[i]==rootData){
        rootIndexInorder = i;
        break;
    }
}
//LinE - LinS = LpreE - LpreS  (Left tree has fixed number of elements)
//RinE - RinS = RpreE - RpreS  (Right tree has fixed number of elements)
LinE = rootIndexInorder - 1;
RinS = rootIndexInorder + 1;
LinS = inS;
RinE = inE;
LpreS = preS + 1;
RpreE = preE;
LpreE = LinE - LinS + LpreS;
RpreE = RinE - RinS + RpreS;

// Assuming there are no duplicates in the tree
BinaryTreeNode<int>* root = new BinaryTreeNode<int>(rootData);
// for left subtree
root->left = buildHelper(in, pre, LinS, LinE, LpreS, LpreE);
//for right subtree
root->right = buildHelper(in, pre, RinS, RinE, RpreS, RpreE);
return root;
}

BinaryTreeNode<int>* buildTree(int* in,int *pre,int size){
    
    //in -> L+R pre -> +LR
    return buildHelper(in,pre,0,size-1,0,size-1);
    //inorder start, end & preorder start, end
}


int main(){

    int pre[] = {1,2,4,5 ,3, 6, 8, 9, 7};
    int in[] = {4, 2, 5, 1, 8, 6, 9, 3, 7};
    int size = 9;
    BinaryTreeNode<int>* root = buildTree(in, pre, 9);
    PrintLevelWise(root);
  // cout<< power(3, 4);
    // delete root;
}

//for input copy paste ->

/*      1
   2         3 
  4  5      6  7
          8  9 
      */

//inorder= 4 2 5 1 8 6 9 3 7
//preorder= 1 2 4 5 3 6 8 9 7

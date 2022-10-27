#include <bits/stdc++.h>

using namespace std;

template <typename T>

class BinaryTreeNode{
public:
  T data;
  BinaryTreeNode* left;
  BinaryTreeNode* right;

  BinaryTreeNode(T data){
    this->data = data;
    left = NULL;
    right = NULL;
  }

  ~BinaryTreeNode(){
    delete left;
    delete right;
  }
};

BinaryTreeNode<int>* takeInputLevelWise(){
  int rootdata;
  cout<<"Enter root data: ";
  cin>>rootdata;

  if(rootdata==-1){
    return NULL;
  }

  BinaryTreeNode<int>* root = new BinaryTreeNode<int>(rootdata);

  queue<BinaryTreeNode<int>*> pendingNodes;
  pendingNodes.push(root);

  while(pendingNodes.size()!=0){
    BinaryTreeNode<int>* front = pendingNodes.front();
    pendingNodes.pop();

    cout<<"Enter left child of "<<front->data<<endl;
    int leftChild;
    cin>>leftChild;

    if(leftChild != -1){
      BinaryTreeNode<int>* child = new BinaryTreeNode<int>(leftChild);
      front->left = child;
      pendingNodes.push(child);
    }

    cout<<"Enter right child of "<<front->data<<endl;
    int rightChild;
    cin>>rightChild;

    if(rightChild != -1){
      BinaryTreeNode<int>* child = new BinaryTreeNode<int>(rightChild);
      front->right = child;
      pendingNodes.push(child);
    }
  }

  return root;

}


class info{
public:

  int maxi;
  int mini;
  int size;
  bool isBST;

};

info solve(BinaryTreeNode<int>* root, int& maxSize){

  if(root==NULL){
      return {INT_MIN, INT_MAX, 0, true};
  }

  info leftAns = solve(root->left, maxSize);
  info rightAns = solve(root->right, maxSize);

  info currNode;

  currNode.maxi = max(root->data, rightAns.maxi);
  currNode.mini = min(root->data, leftAns.mini);
  currNode.size = leftAns.size + rightAns.size + 1;

  currNode.isBST = leftAns.isBST && rightAns.isBST && (root->data > leftAns.maxi && root->data < rightAns.mini);

  if(currNode.isBST){
      maxSize = max(maxSize, currNode.size);
  }

  return currNode;

}

int largestBst(BinaryTreeNode<int> *root)
{

	int maxSize = 0;
    info ans = solve(root, maxSize);
    return maxSize;
}

int main(int argc, char const *argv[]) {
  BinaryTreeNode<int>* root = takeInputLevelWise();
  cout<<"Size of the largest BST that can be formed by this tree is: "<<largestBst(root)<<endl;
  return 0;
}

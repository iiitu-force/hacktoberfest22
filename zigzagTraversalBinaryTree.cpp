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


vector<vector<int>> zigzagLevelOrder(BinaryTreeNode<int>* root) {
        vector<vector<int>> res;

        if(root==NULL){
            return res;
        }

        queue <BinaryTreeNode<int>*> q;
        q.push(root);

        bool leftToRight = true;

        while(q.size()!=0){
            int size = q.size();
            vector <int> ans(size);

            for(int i=0; i<size; i++){

                BinaryTreeNode<int>* front = q.front();
                q.pop();

                int index = leftToRight ? i: size-i-1;
                ans[index] = front->data;

                if(front->left!=NULL){
                    q.push(front->left);
                }
                if(front->right!=NULL){
                    q.push(front->right);
                }
            }

            res.push_back(ans);
            leftToRight = !leftToRight;
        }

        return res;
}

int main(int argc, char const *argv[]) {
  BinaryTreeNode<int>* root = takeInputLevelWise();

  vector<vector<int>> vec = zigzagLevelOrder(root);

  for (int i = 0; i < vec.size(); i++) {
        for (int j = 0; j < vec[i].size(); j++)
            cout << vec[i][j] << " ";
        cout << endl;
    }
  return 0;
}

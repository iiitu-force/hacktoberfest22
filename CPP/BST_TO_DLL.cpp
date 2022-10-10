#include <iostream>
#include <vector>
using namespace std;

class TreeNode
{
public:
  int val = 0;
  Node* left = nullptr;
  Node* right = nullptr;

  Node(int val)
  {
    this->val = val;
  }
};

Node* BSTtoDLL(Node* root)
{
  return nullptr;
}

void display(Node* node)
{
  Node* head = node;
  while (node != nullptr) {
    cout << node.val << " ";
    node = node->right;
    if (node == head)
      break;
  }
}

Node* constructFromInOrder(vector<int>& inOrder, int si, int ei)
{
  if (si > ei)
    return nullptr;
  int mid = (si + ei) / 2;
  Node* root = new Node(inOrder[mid]);

  root->left = constructFromInOrder(inOrder, si, mid - 1);
  root->right = constructFromInOrder(inOrder, mid + 1, ei);

  return root;
}

Node* constructFromInOrder(vector<int>& inOrder)
{
  return constructFromInOrder(inOrder, 0, inOrder.size() - 1);
}

void solve()
{
  int n;
  cin >> n;
  vector<int> in(n, 0);
  for (int i = 0; i < n; i++)
  {
    cin >> in[i];
  }

  Node* root = constructFromInOrder(in);
  Node* head = BSTtoDLL(root);
  display(head);
}

int main()
{
  solve();
  return 0;
}
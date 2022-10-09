class Solution {
public:
    void Traversal(TreeNode* root, set<int> &s){
        if(root==NULL){
            return;
        }
        s.insert(root->val);
        Traversal(root->left,s);
        Traversal(root->right,s);
    }
    int findSecondMinimumValue(TreeNode* root) {
        set<int> s;
        Traversal(root,s);
        set<int>:: iterator it = s.begin();
        it++;
        if(s.size()<2){
            return -1;
        }
        else{
            return *(it);
        }
    }
};

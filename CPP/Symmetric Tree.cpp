
0/5
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    bool isSym(TreeNode* root1,TreeNode* root2){
        if(root1 == NULL && root2 == NULL){
            return true;
        }
        if(root1 == NULL){
            return false;
        }
        if(root2 == NULL){
            return false;
        }
        if(root1->val != root2->val){
            return false;
        }
        bool x = isSym(root1->left,root2->right);
        bool y = isSym(root1->right,root2->left);
        
        return x && y;
    }
    bool isSymmetric(TreeNode* root) {
        return isSym(root->left,root->right);
    }
};

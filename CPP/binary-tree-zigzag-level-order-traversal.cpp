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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
         vector<vector<int>> result;
        if(root == NULL){
            return result;;
        }
        
        queue<TreeNode*> pendingNodes;
        vector<int> v;
        v.push_back(root->val);
        result.push_back(v);
        pendingNodes.push(root);
        int prevNodeCount = 1;
        int currNodeCount = 0;
        v.clear();
        int k = 1;
        
        while(pendingNodes.size() > 0){
            TreeNode* currNode = pendingNodes.front();
            pendingNodes.pop();
            prevNodeCount--;
            if(currNode->left != NULL){
                v.push_back(currNode->left->val); 
                pendingNodes.push(currNode->left);
                currNodeCount++;
            }
            
            if(currNode->right != NULL){
                 v.push_back(currNode->right->val);
                pendingNodes.push(currNode->right);
                currNodeCount++;
            }
            
            if(prevNodeCount == 0 && v.size() != 0){
                if(k){
                    reverse(v.begin(),v.end());
                  k = 0;  
                }else{
                    k = 1;
                }
                result.push_back(v);
                v.clear();
                prevNodeCount = currNodeCount;
                currNodeCount = 0;
            }           
        }
        
        return result;
    }
};

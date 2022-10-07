class Solution {
public:
    TreeNode* insertIntoBST(TreeNode* root, int val) {
        if(root == NULL) return new TreeNode(val);   //  if any where we find NULL we will make node of the val 
        TreeNode *cur = root;                        //  making a copy of root
        
        while(true)                                  //  making of infinite loop
        {
          if(cur->val <= val)   // at starting this will be node so if the value is less than our val we will move right 
          {                    
            if(cur->right != NULL) cur = cur->right;  // now we will try to find a area where we can place our value as question mentioned there is no duplicate of given value
                else {
                    cur->right = new TreeNode(val);    // if we get a null spot we will make node of the value
                    break;                             //if we get our value we will break the loop 
                }
            } else {
                if(cur->left != NULL) cur = cur->left;    // same step as of above for left 
                else {
                    cur->left = new TreeNode(val);
                    break;
                }
            }
        }
        return root;
    }
};

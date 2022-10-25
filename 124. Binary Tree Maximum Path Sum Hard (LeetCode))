int solve(TreeNode* root,int &res)
    {
        // Base Case 
        if(root==NULL) return NULL;
        int ls = solve(root->left,res);
        int rs = solve(root->right,res);
        int temp = max(max(ls,rs)+root->val,root->val);
        int ans = max(temp,ls+rs+root->val);
        res = max(res,ans);
        return temp;
    }
    int maxPathSum(TreeNode* root) {
        int res = INT_MIN;
        solve(root,res);
        return res;
    }

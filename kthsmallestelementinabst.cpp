class Solution {
    int solve(TreeNode* root, int &k)
    {
        if(!root)
            return 0;
        
        int left = solve(root->left,k);
        if(left)
            return left;
        k-=1;
        if(k==0)
            return root->val;
        int right = solve(root->right,k);
        return right;
    }
public:
    int kthSmallest(TreeNode* root, int k) {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        
        return solve(root,k);
    }
};
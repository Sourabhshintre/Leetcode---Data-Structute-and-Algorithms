class Solution {
public:
    TreeNode* solve(TreeNode* &root , int node)
    {
        if(!root)
            return root = new TreeNode(node);
        if(root->val > node)
            root->left = solve(root->left,node);
        else
            root->right = solve(root->right,node);
    
    return root;
    }

    TreeNode* bstFromPreorder(vector<int>& preorder) {
        
        TreeNode* root = NULL;

        for(auto x:preorder)
            solve(root,x);

    return root;
        
    }
};

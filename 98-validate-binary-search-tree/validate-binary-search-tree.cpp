class Solution {
public:
    bool BST(TreeNode* root, long min,long max)
    {
        if(root==NULL)
            return true;
        
        if(root->val >= max || root->val <= min)
            return false;
        return BST(root->left,min,root->val) && BST(root->right,root->val,max);

    }

    bool isValidBST(TreeNode* root) {
        return BST(root,LONG_MIN,LONG_MAX);   
    }
};

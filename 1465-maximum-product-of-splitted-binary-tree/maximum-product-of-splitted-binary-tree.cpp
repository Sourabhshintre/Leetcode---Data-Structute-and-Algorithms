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

    long long totalsum = 0;
    long long maxprod = 0;

    int maxProduct(TreeNode* root) {

        totalsum = getsum(root);
        getsum(root);   // recalculate to find max product
        return maxprod % 1000000007;
        
    }

    long long getsum(TreeNode* node)
    {
        if(!node)
            return 0;

        long long subsum = node->val + getsum(node->left) + getsum(node->right);

        if(totalsum > 0)
        {
            maxprod = max(maxprod , subsum * (totalsum-subsum));
        }
        return subsum;
    }
};
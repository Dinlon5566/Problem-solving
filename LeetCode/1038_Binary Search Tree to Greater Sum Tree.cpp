class Solution {
public:
    int world=0;
    TreeNode* bstToGst(TreeNode* root) {
        if(root->right)
            bstToGst(root->right);
        root->val=world+root->val;
        world=root->val;
        if(root->left)
            bstToGst(root->left);
        return root;
    }
};

class Solution {
public:
    TreeNode* invertTree(TreeNode* root) {
        if(!root)
            return nullptr;
        TreeNode tmpNode=*root;
        root->left=tmpNode.right;
        root->right=tmpNode.left;
        invertTree(root->left);
        invertTree(root->right);
        return root;
    }
};

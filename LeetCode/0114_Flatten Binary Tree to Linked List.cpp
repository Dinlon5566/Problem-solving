class Solution {
public:
    TreeNode* pre=nullptr;
    void flatten(TreeNode* root) {
        if(root==nullptr){
            return;
        }
        flatten(root->right);
        flatten(root->left);
        root->right=pre;
        root->left=nullptr;
        pre=root;
    }

};

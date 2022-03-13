class Solution {
public:
    vector<int> res;
    void traverse(TreeNode* root){
        if(!root){
            return;
        }
        if(root->left){
            traverse(root->left);
        }
        res.push_back(root->val);
        if(root->right){
            traverse(root->right);
        }
    }
    vector<int> inorderTraversal(TreeNode* root) {
        traverse(root);
        return res;
    }
};

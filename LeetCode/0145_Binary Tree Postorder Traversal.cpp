class Solution {
public:
    vector<int> result;
    vector<int> postorderTraversal(TreeNode* root) {
        traversal(root);
        return result;
    }
    void traversal(TreeNode* root){
        if(!root)
            return;

        traversal(root->left);
        traversal(root->right);

        result.push_back(root->val);
    }
};

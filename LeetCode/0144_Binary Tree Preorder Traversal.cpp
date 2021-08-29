class Solution
{
public:
    vector<int> result;
    vector<int> preorderTraversal(TreeNode* root)
    {
        traversal(root);
        return result;
    }
    void traversal(TreeNode* root)
    {
        if(!root)
            return;

        result.push_back(root->val);

        traversal(root->left);
        traversal(root->right);
    }
};

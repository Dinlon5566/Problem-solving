class Solution
{
public:
    int maxDeep=0;
    int sum=0;
    void bfs(TreeNode* root,int deep=1)
    {
        if(!root)
        {
            return;
        }
        if(deep==maxDeep)
        {
            sum+=root->val;
        }
        else if(deep>maxDeep)
        {
            maxDeep=deep;
            sum=root->val;
        }
        bfs(root->left,deep+1);
        bfs(root->right,deep+1);
    }
    int deepestLeavesSum(TreeNode* root)
    {
        bfs(root);
        return sum;
    }
};

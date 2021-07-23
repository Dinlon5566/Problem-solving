class Solution
{
public:

    bool isSymmetric(TreeNode* root)
    {
        return !root ? true : isSymmetric(root->left,root->right);
    }

    bool isSymmetric(TreeNode* n1,TreeNode* n2)
    {
        if(!n1&&!n2)
            return 1;

        if(!n1||!n2)
            return 0;

        if(n1->val!=n2->val){
            return 0;
        }

        return isSymmetric(n1->left,n2->right)&&isSymmetric(n1->right,n2->left);
    }
};

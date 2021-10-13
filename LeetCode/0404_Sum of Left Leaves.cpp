class Solution {
public:
    int result=0;
    void BFS(TreeNode* root,bool isLeft){
        if(!root)
            return;
        if(isLeft&&!root->right&&!root->left){
            result+=root->val;
            return;
        }

        if(root->left)
            BFS(root->left,1);
        if(root->right)
            BFS(root->right,0);

    }
    int sumOfLeftLeaves(TreeNode* root) {
        if(!root)
            return 0;
        BFS(root,0);
        return result;
    }
};

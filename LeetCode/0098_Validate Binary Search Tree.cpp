class Solution {
public:

    bool isValidBST(TreeNode* root) {
        return isValidBST(root,nullptr,nullptr);
    }

    bool isValidBST(TreeNode* root,TreeNode* minNode,TreeNode* maxNode){
         if(root==nullptr)
            return 1;

        if(minNode&&root->val<=minNode->val || maxNode && root->val >= maxNode->val ){
            return 0;
        }

        return isValidBST(root->left,minNode,root) && isValidBST(root->right,root,maxNode);
    }
};

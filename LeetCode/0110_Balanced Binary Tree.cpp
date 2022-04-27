class Solution {
public:
    bool CF;
    int hightofNode(TreeNode* root){
        int res;
        if(!root||!CF){
            return 0;
        }
        int leftN=hightofNode(root->left);
        int rightN=hightofNode(root->right);
        if(abs(rightN-leftN)>1){
            CF=0;
            return 0;
        }
       return 1+max(rightN,leftN);
    }
    bool isBalanced(TreeNode* root) {
        CF=1;
        hightofNode(root);
        return CF;
    }
};

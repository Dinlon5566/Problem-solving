class Solution {
public:
    bool isSameTree(TreeNode* p, TreeNode* q) {
        if(!q&&!p){
            return true;
        }
        if(!q||!p||p->val!=q->val){
            return false;
        }
        return isSameTree(p->left,q->left)&&isSameTree(p->right,q->right);
    }
};

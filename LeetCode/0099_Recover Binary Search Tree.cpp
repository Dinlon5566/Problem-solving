class Solution {
public:
    TreeNode* firstNode=nullptr;
    TreeNode* secondNode=nullptr;
    TreeNode* prevNode=new TreeNode(INT_MIN);

    void recoverTree(TreeNode* root) {
        if(!root){
            return;
        }
        travase(root);
        int temp=firstNode->val;
        firstNode->val=secondNode->val;
        secondNode->val=temp;
    }

    void travase(TreeNode* root){
        if(!root)
            return;

        travase(root->left);

        if(!firstNode&& prevNode->val>root->val){
            firstNode=prevNode;
        }
        if(firstNode&&prevNode->val>root->val){
            secondNode=root;
        }
        prevNode=root;

        travase(root->right);

    }
};

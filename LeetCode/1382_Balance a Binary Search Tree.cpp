class Solution {
public:
    vector<int> allNode;
     TreeNode* balanceBST(TreeNode* root) {
        drawTree(root);
        sort(allNode.begin(),allNode.end());
        return builder(0,allNode.size()-1);
    }
    TreeNode* builder(int left,int right){
        if(left>right)
            return nullptr;
        int mid=(left+right)/2;
        TreeNode* newNode=new TreeNode(allNode[mid]);
        newNode->left=builder(left,mid-1);
        newNode->right=builder(mid+1,right);
        return newNode;
    }
    void drawTree(TreeNode* root){
        if(!root)
            return;
        allNode.push_back(root->val);
        drawTree(root->left);
        drawTree(root->right);
    }
};

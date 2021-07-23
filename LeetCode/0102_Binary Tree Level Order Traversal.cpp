class Solution {
public:
    vector<vector<int>> result;

    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<int> pool;

        if(!root)
            return result;

        pool.push_back(root->val);
        result.push_back(pool);
        levelOrder(root->left,root->right,2);

        return result;
    }

    void levelOrder(TreeNode* left,TreeNode* right,int deep){
        vector<int> pool;

        if(!left&&!right)
            return;

        if(left)
            pool.push_back(left->val);
        if(right)
            pool.push_back(right->val);

        if(result.size()<deep){
            result.push_back(pool);
        }else{
            for(int i:pool){
                result[deep-1].push_back(i);
            }
        }

        if(left)
        levelOrder(left->left,left->right,deep+1);
        if(right)
        levelOrder(right->left,right->right,deep+1);
    }
};

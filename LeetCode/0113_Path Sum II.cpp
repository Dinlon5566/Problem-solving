class Solution {
public:
    vector<vector<int>> result={};
    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
        vector<int> road={};
        _pathSum(root,targetSum,road);
        return result;
    }
    void _pathSum(TreeNode* root, int targetSum,vector<int> road) {
        if(!root)
            return;
        if(root->val==targetSum&&!root->left&&!root->right){
            road.push_back(root->val);
            result.push_back(road);
            return;
        }else{
            road.push_back(root->val);
            _pathSum(root->left,targetSum-root->val,road);
            _pathSum(root->right,targetSum-root->val,road);
        }
    }
};

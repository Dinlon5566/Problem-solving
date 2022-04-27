class Solution {
public:
    vector<string> res;
    void bts(TreeNode* root,string str){
        if(!root->left&&!root->right){
            res.push_back(str);
            return ;
        }
        if(root->left){
            bts(root->left,str+"->"+to_string(root->left->val));
        }
        if(root->right){
            bts(root->right,str+"->"+to_string(root->right->val));
        }
    }
    vector<string> binaryTreePaths(TreeNode* root) {
        bts(root,to_string(root->val));
        return res;
    }
};

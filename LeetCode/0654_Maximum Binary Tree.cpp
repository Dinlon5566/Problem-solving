class Solution {
public:
    TreeNode* dfs(vector<int>& nums,int l,int r){
        if(l>=r){
            return nullptr;
        }
        auto pos=max_element(nums.begin()+l,nums.begin()+r)-nums.begin();
        return new TreeNode(nums[pos],dfs(nums,l,pos),dfs(nums,pos+1,r));

    }
    TreeNode* constructMaximumBinaryTree(vector<int>& nums) {
        return dfs(nums,0,nums.size());
    }
};

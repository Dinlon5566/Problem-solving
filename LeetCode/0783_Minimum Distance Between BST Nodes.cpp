class Solution {
public:
    int minDiffInBST(TreeNode* root) {
        vector<int> arr;
        drawTree(root,arr);
        sort(arr.begin(),arr.end());
        int minNum=INT_MAX;
        for(int i=1;i<arr.size();i++){
            minNum=min(minNum,arr[i]-arr[i-1]);
        }
        return minNum;
    }
    void drawTree(TreeNode* root,vector<int>& arr){
        if(!root)
            return;
        arr.push_back(root->val);
        drawTree(root->left,arr);
        drawTree(root->right,arr);
    }
};

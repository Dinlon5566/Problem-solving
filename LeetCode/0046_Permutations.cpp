class Solution {
public:
    vector<vector<int>> res;
    vector<vector<int>> permute(vector<int>& nums) {
        perser(0,nums);
        return res;
    }
    void perser(int loc,vector<int> &nums){
        if(loc>=nums.size()){
            res.push_back(nums);
            return;
        }
        for(int i=loc;i<nums.size();i++){
            swap(nums[i],nums[loc]);
            perser(loc+1,nums);
            swap(nums[i],nums[loc]);
        }
        return;
    }

};

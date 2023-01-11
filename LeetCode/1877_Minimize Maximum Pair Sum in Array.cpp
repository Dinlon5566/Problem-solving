class Solution {
public:
    int minPairSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int l=nums.size()-1,maxNum=INT_MIN;
        for(int i=0;i<=l/2;i++){
            maxNum=max(maxNum,nums[i]+nums[l-i]);
        }
        return maxNum;
    }
};

class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
        int S=nums.size();
        int dp[S];
        fill(dp,dp+S,INT_MAX);
        for(int i=0;i<S;i++){
            *lower_bound(dp,dp+S,nums[i])=nums[i];
        }
        return lower_bound(dp,dp+S,INT_MAX)-dp;
    }
};

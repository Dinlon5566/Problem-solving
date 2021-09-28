class Solution {
    public:
    int rob(vector<int>& nums) {
        int dp[nums.size()+1][2];
        dp[0][0]=dp[0][1]=0;
        //dp[D][0]:no rubber
        //dp[D][1]:ruber
        for(int d=1;d<=nums.size();d++){
            dp[d][0]=max(dp[d-1][0],dp[d-1][1]);
            dp[d][1]=dp[d-1][0]+nums[d-1];
        }
        return max(dp[nums.size()][0],dp[nums.size()][1]);
    }
};

class Solution {
public:
    int minCostClimbingStairs(vector<int>& cost) {
        int dp[cost.size()+2];
        dp[0]=cost[0];
        dp[1]=cost[1];
        for(int i=2;i<=cost.size();i++){
            if(i==cost.size())
                return min(dp[i-1],dp[i-2]);
            dp[i]=cost[i]+min(dp[i-1],dp[i-2]);
        }
        return dp[cost.size()];
    }
};

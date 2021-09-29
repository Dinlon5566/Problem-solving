class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int dp[prices.size()+1][3];

        dp[0][0]=0;//nostock
        dp[0][1]=INT_MIN;//inhand
        dp[0][2]=INT_MIN;//sold

        for(int d=1;d<=prices.size();d++){
            dp[d][0]=max(dp[d-1][0],dp[d-1][2]);
            dp[d][1]=max(dp[d-1][1],dp[d-1][0]-prices[d-1]);
            dp[d][2]=dp[d-1][1]+prices[d-1];
        }

        return max(dp[prices.size()][0],dp[prices.size()][2]);
    }
};

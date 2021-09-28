class Solution
{
public:
    int maxProfit(vector<int>& prices)
    {

        int dp[prices.size()+1][4];

        dp[0][0]=dp[0][2]=INT_MIN;
        dp[0][1]=dp[0][3]=0;

        for(int d=1; d<=prices.size(); d++)
        {
            dp[d][0]=max(dp[d-1][0],-prices[d-1]);
            dp[d][1]=max(dp[d-1][1],dp[d-1][0]+prices[d-1]);
            dp[d][2]=max(dp[d-1][2],dp[d-1][1]-prices[d-1]);
            dp[d][3]=max(dp[d-1][3],dp[d-1][2]+prices[d-1]);
        }

        return max(dp[prices.size()][1],dp[prices.size()][3]);
    }
};

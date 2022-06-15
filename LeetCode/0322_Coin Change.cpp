class Solution {
public:
    int coinChange(vector<int>& coins, int amount) {
        int dp[amount+1];
        for(int i=0;i<=amount;i++){
            dp[i]=INT_MAX;
        }
        dp[0]=0;
        for(int i=0;i<coins.size();i++){
            for(int j=coins[i];j<=amount;j++){
                if(dp[j-coins[i]]!=INT_MAX)
                dp[j]=min(dp[j],dp[j-coins[i]]+1);
            }
        }
        if(dp[amount]==INT_MAX){
            return -1;
        }else{
            return dp[amount];
        }
    }
};

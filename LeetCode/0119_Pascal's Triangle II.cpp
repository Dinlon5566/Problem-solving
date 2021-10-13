class Solution {
public:
    vector<int> getRow(int rowIndex) {
        vector<int> dp(rowIndex+1,0);
        vector<int> adp(rowIndex+1,0);
        dp[0]=1;
        for(int i=0;i<rowIndex;i++){
            adp=dp;
            for(int j=1;j<=i+1;j++){
                dp[j]+=adp[j-1];
            }
        }
        return dp;
    }
};

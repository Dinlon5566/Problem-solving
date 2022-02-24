class Solution {
public:
    bool canPartition(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int sum=0;
        for(int n:nums){
            sum+=n;
        }
        if(sum&1){
            return 0;
        }

        int tar=sum/2,S=nums.size();
        bool dp[S+1][sum+1];
        memset(dp,0,sizeof(dp));

        dp[0][0]=true;
        for(int i=0;i<S;i++){
            for(int j=0;j<sum+1;j++){
                if(dp[i][j]){
                    dp[i+1][j]=true;
                    dp[i+1][j+nums[i]]=true;
                }
            }
        }
        return dp[S][tar];
    }
};

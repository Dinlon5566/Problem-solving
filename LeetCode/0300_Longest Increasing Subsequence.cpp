class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
        int S=nums.size();
        int dp[S];
        for(int i=0;i<S;i++) dp[i]=1;
        for(int i=0;i<S;i++){
            for(int j=0;j<i;j++){
                if(nums[i]>nums[j]){
                    dp[i]=max(dp[i],dp[j]+1);
                }
            }
        }
        int res=INT_MIN;
        for(int n:dp){
            res=max(n,res);
        }
        return res;
    }
};

class Solution
{
public:
    int houserob(vector<int>& nums)
    {
        int dp[nums.size()+1][2];
        dp[0][0]=dp[0][1]=0;
        //dp[D][0]:no rubber
        //dp[D][1]:ruber
        for(int d=1; d<=nums.size(); d++)
        {
            dp[d][0]=max(dp[d-1][0],dp[d-1][1]);
            dp[d][1]=dp[d-1][0]+nums[d-1];
        }

        return max(dp[nums.size()][0],dp[nums.size()][1]);
    }

    int rob(vector<int>& nums){

        if(nums.size()==0){
            return 0;
        }else if(nums.size()==1){
            return nums[0];
        }else if(nums.size()==2){
            return max(nums[0],nums[1]);
        }
        vector<int> v1(nums.begin()+1,nums.end());
        vector<int> v2(nums.begin(),nums.end()-1);
        return max(houserob(v1),houserob(v2));
    }
};

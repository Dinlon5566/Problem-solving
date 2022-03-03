class Solution {
public:
    int dp[5005];

    void makedp(){
        dp[1]=dp[0]=dp[2]=0;
        dp[3]=1;
        for(int i=4;i<5005;i++){
            dp[i]=dp[i-1]+i-2;
        }
    }

    int numberOfArithmeticSlices(vector<int>& nums) {

        if(nums.size()<3) return 0;
        makedp();

        int d=nums[1]-nums[0];
        int ans=0;
        int con=2;
        for(int i=2;i<nums.size();i++){
            if(nums[i]-nums[i-1]==d){
                con++;
            }else{
                d=nums[i]-nums[i-1];
                ans+=dp[con];
                con=2;
            }
        }

        ans+=dp[con];
        return ans;
    }
};

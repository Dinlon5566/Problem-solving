class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int allmul=1;
        int zf=0;
        for(int num:nums){
            if(num==0)
                zf++;
            else
                allmul*=num;

        }
        for(int i=0;i<nums.size();i++){
           if(zf>1){
                nums[i]=0;
           }else if(nums[i]==0){
                nums[i]=allmul;
           }else{
                if(zf==1){
                    nums[i]=0;
                }else{
                    nums[i]=allmul/nums[i];
                }
           }
        }
        return nums;
    }
};

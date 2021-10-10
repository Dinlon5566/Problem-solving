class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int r=nums[0];
        int result=nums[0];
        for(int i=1,imax=nums[0],imin=nums[0];i<nums.size();i++){
            if(nums[i]<0)
                swap(imin,imax);
            imin=min(nums[i],imin*nums[i]);
            imax=max(nums[i],imax*nums[i]);
            result=max(result,imax);
        }
        return result;
    }
};

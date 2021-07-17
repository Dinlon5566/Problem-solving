class Solution {
public:
    int singleNumber(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size();i+=2){
            if(nums[i]!=nums[(i+1)%nums.size()]){
                return nums[i];
            }
        }
        return nums[0];
    }
};

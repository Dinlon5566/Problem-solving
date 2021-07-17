class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int zeroCount=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==0){
                zeroCount++;
            }else{
                nums[i-zeroCount]=nums[i];
            }
        }
        for(int i=nums.size()-zeroCount;i<nums.size();i++){
            nums[i]=0;
        }
    }
};

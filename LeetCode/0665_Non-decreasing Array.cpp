class Solution {
public:
    bool checkPossibility(vector<int>& nums) {
        int res=1,c=1;
        for(int i=0;i<nums.size()-1;i++){
            if(nums[i]>nums[i+1]){
                if(!c){
                    return false;
                }
                if(i>0&&nums[i-1]>nums[i+1]){
                    nums[i+1]=nums[i];
                }
                c=0;
            }
        }

        return 1;
    }
};

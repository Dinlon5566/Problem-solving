class Solution {
public:
    bool canJump(vector<int>& nums) {
        int dis=0;
        for(int loc=0;loc<=dis;loc++){
            dis=max(dis,loc+nums[loc]);
            if(dis>=nums.size()-1)
                return true;
        }
        return false;
    }
};

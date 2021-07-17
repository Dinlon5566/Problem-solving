class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int len=nums.size();
        int tmp[len];
        for(int i=0;i<len;i++)
            tmp[i]=nums[i];
        for(int i=0;i<len;i++)
            nums[(i+k)%len]=tmp[i];
    }
};

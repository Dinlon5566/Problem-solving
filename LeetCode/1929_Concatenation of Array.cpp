class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        int orginSize=nums.size();
        for(int i=0;i<orginSize;i++)
            nums.push_back(nums[i]);
        return nums;
    }
};

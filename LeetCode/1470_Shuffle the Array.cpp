class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        int tn=n;
        vector<int> result;
        for(int i=0;i<n;i++){
            result.push_back(nums[i]);
            result.push_back(nums[tn]);
            tn++;
        }
        return result;
    }
};

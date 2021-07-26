class Solution
{
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2)
    {
        vector<int> result;
        set<int> nums(nums1.begin(),nums1.end());

        for(int i:nums2){
            if(nums.erase(i))
                result.push_back(i);
        }

        return result;
    }
};

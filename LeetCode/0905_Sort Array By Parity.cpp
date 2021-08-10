class Solution
{
public:
    vector<int> sortArrayByParity(vector<int>& nums)
    {
        for(int left=0; left<nums.size()-1; left++)
        {
            if(nums[left]%2==1)
            {
                int right=left+1;
                while(right<nums.size())
                {
                    if(nums[right]%2==0){
                        swap(nums[left],nums[right]);
                        break;
                    }
                    right++;
                    if(right==nums.size())
                    {
                        return nums;
                    }
                }
            }
        }
        return nums;
    }
};

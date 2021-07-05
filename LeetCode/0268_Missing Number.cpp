class Solution
{
public:
    int missingNumber(vector<int>& nums)
    {
        int len=nums.size();
        int all=((len+1)*len)/2;
        int vectorAll=0;
        for(int i=0; i<len; i++)
        {
            vectorAll+=nums[i];
        }
        return ((len+1)*len)/2-vectorAll;
    }
};

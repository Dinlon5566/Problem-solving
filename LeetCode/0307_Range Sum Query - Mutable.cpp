class BIT
{
private:
    vector<int> bitTree;
public:
    int lowbit(int n=0)
    {
        return n&(-n);
    }
    BIT(int s=0)
    {
        bitTree.assign(s+1,0);
    }
    void addNum(int loc,int val)
    {
        for(; loc<bitTree.size(); loc+=lowbit(loc))
        {
            bitTree[loc]+=val;
        }
    }
    int getSum(int loc)
    {
        int sum=0;
        for(; loc>0; loc-=lowbit(loc))
        {
            sum+=bitTree[loc];
        }
        return sum;
    }

};

class NumArray
{
private:
    vector<int> nums;
    BIT bit;
public:
    NumArray(vector<int>& nums)
    {
        this->bit=BIT(nums.size());
        this->nums=nums;
        for(int i=0; i<nums.size(); i++)
        {
            bit.addNum(i+1,nums[i]);
        }
    }

    void update(int index, int val)
    {
        int diff=val-nums[index];
        nums[index]=val;
        bit.addNum(index+1,diff);
    }

    int sumRange(int left, int right)
    {
        return bit.getSum(right+1)-bit.getSum(left);
    }

};

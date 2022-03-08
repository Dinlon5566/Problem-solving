class Solution {
public:
    int thirdMax(vector<int>& nums) {
        set<int> pool;
        for(int num:nums){
            pool.insert(num);
            if(pool.size()>3){
                pool.erase(pool.begin());
            }
        }
        if(pool.size()<3){
            return *pool.rbegin();
        }
        return *pool.begin();
    }
};

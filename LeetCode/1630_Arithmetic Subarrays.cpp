class Solution {
public:
    vector<bool> checkArithmeticSubarrays(vector<int>& nums, vector<int>& l, vector<int>& r) {
        vector<bool> result;
        for(int t=0;t<l.size();t++){
            vector<int> pool;

            if(r[t]-l[t]<=1){
                result.push_back(true);
                continue;
            }

            for(int i=l[t];i<=r[t];i++){
                pool.push_back(nums[i]);
            }
            sort(pool.begin(),pool.end());
            bool flag=1;
            for(int i=2;i<=r[t]-l[t];i++){
                if(pool[i]-pool[i-1]!=pool[i-1]-pool[i-2]){
                    flag=0;
                }
            }
            result.push_back(flag);
        }
        return result;
    }
};

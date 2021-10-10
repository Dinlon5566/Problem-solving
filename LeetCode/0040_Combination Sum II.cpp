class Solution {
public:
    vector<vector<int>> result;
    void findN(vector<int> nums,int tar,int pos,vector<int> pool){
        if(tar==0){
            result.push_back(pool);
            return;
        }
        for(int i=pos;i<nums.size();i++){

            if(nums[i]>tar){
                return;
            }


                if(i>0&&i>pos&&nums[i]==nums[i-1]){
                    continue;
                }

                pool.push_back(nums[i]);
                findN(nums,tar-nums[i],i+1,pool);
                pool.pop_back();

        }
    }

    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        vector<int> pool;

        sort(candidates.begin(),candidates.end());
        findN(candidates,target,0,pool);
        return result;
    }
};

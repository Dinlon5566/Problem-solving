class Solution
{
public:

    vector<vector<int>> result;

    vector<vector<int>> combinationSum(vector<int>& candidates, int target)
    {
        sort(candidates.begin(),candidates.end());

        vector<int> unit;
        travel(candidates,unit,target,0);

        return result;
    }

    void travel(vector<int>& candidates, vector<int>& unit,int target,int level){
        if(target==0){
            result.push_back(unit);
            return;
        }

        for(int i=level;i<candidates.size() && target>=candidates[i];i++){
            unit.push_back(candidates[i]);
            travel(candidates,unit,target-candidates[i],i);
            unit.pop_back();
        }

    }
};

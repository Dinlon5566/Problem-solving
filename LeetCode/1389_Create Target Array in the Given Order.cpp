class Solution {
public:
    vector<int> createTargetArray(vector<int>& nums, vector<int>& index) {
        vector<int> result(nums.size(),0);
        for(int i=0;i<nums.size();i++){
            if(index[i]==i){
                result[i]=nums[i];
            }else{
                int shift;
                for(int j=index[i];j<i+1;j++){
                    shift=result[j];
                    result[j]=nums[i];
                    nums[i]=shift;
                }
            }
        }
        return result;
    }
};

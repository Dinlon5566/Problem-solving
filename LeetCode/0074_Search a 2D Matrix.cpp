class Solution {
public:
    vector<vector<int>> nums;
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        nums=matrix;
        return binarySearch(0,nums.size()*nums[0].size()-1,target);

    }
    bool binarySearch(int left,int right,int target){
        if(left>right){
            return 0;
        }
        int mid=(left+right)/2;

        int m=mid/nums[0].size();
        int n=mid%nums[0].size();

        if(nums[m][n]==target){
            return 1;
        }else if(nums[m][n]>target){
            return 0 || binarySearch(left,mid-1,target);
        }else{
            return 0 || binarySearch(mid+1,right,target);
        }
        return 0;
    }
};

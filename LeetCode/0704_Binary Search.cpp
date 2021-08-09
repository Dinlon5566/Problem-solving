class Solution {
public:
    int search(vector<int>& nums, int target) {
        return _search(nums,target,0,nums.size()-1);
    }
    int _search(vector<int>& nums, int target,int left,int right){
        if(left>right){
            return -1;
        }
        int mid=(left+right)/2;
        if(nums[mid]==target){
            return mid;
        }else{
            return nums[mid]>target?_search(nums,target,left,mid-1):_search(nums,target,mid+1,right);
        }
    }
};

class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int tarloc=binarySearch(nums,0,nums.size()-1,target);
        if(tarloc==-1){
            return vector<int>(2,-1);
        }
        int left,right;
        left=right=tarloc;
        while(left>0){
            if(nums[left-1]==nums[left]){
                left--;
            }else{
                break;
            }
        }
        while(right<nums.size()-1){
            if(nums[right+1]==nums[right]){
                right++;
            }else{
                break;
            }
        }
        return vector<int>()={left,right};
    }
    int binarySearch(vector<int> nums,int left,int right,int target){
        if(left>right)
            return -1;
        int mid=(left+right)/2;
        if(nums[mid]==target){
            return mid;
        }else if(nums[mid]>target){
            return binarySearch(nums,left,mid-1,target);
        }else{
            return binarySearch(nums,mid+1,right,target);
        }
        return -1;
    }
};

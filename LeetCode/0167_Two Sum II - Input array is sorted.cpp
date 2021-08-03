class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        vector<int> result={};
        int left=0,right=numbers.size()-1;
        while(numbers[left]+numbers[right]!=target){
            if(numbers[left]+numbers[right]>target){
                right--;
            }else{
                left++;
            }
        }
         result.push_back(left+1);
         result.push_back(right+1);
         return result;
    }
};

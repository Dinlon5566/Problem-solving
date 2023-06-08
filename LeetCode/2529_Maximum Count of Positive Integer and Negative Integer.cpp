class Solution {
public:
    int maximumCount(vector<int>& nums) {
        int nega,zero,post;
        nega=zero=post=0;
        for(int num:nums){
            if(num<0){
                nega++;
            }else if(num==0){
                zero++;
            }else{
                break;
            }
        }
        return max(nega,(int)nums.size()-nega-zero);
    }
};

class Solution {
public:
    int findGCD(vector<int>& nums) {
        int minNum,maxNum;
        minNum=INT_MAX;
        maxNum=INT_MIN;
        for(int num: nums){
            minNum=min(minNum,num);
            maxNum=max(maxNum,num);
        }
        return __gcd(minNum,maxNum);
    }
};

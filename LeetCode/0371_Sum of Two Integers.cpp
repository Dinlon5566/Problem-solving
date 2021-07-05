class Solution {
public:
    int getSum(int a, int b) {
        unsigned int carry=a&b;
        int num=a^b;
        if(carry==0){
            return num;
        }else{
            return getSum(carry<<1,num);
        }
        }
};
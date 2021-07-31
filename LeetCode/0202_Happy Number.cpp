class Solution {
public:
    int cal(int num){
        int ans=0;
        while(num){
            ans+= (num%10)*(num%10);
            num/=10;
        }
        return ans;
    }
    bool isHappy(int n) {
        int fast,slow;
        slow=cal(n);
        fast=cal(slow);
        while(slow!=fast){
            slow=cal(slow);
            fast=cal(cal(fast));
            if(fast==1)
                return 1;
        }
        if(slow==1)
            return 1;
        return 0;
    }
};

class Solution {
public:
    int hammingWeight(uint32_t n) {
        int result=0;
        while(n){
            result+=n&1;
            n>>=1;
        }
        return result;
    }
};

//100% fast
class Solution2 {
public:
    int hammingWeight(uint32_t n) {
        int result=0;
        while(n){
            n&=(n-1);
            result++;
        }
        return result;
    }
};

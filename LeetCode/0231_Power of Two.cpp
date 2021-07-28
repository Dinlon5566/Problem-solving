class Solution {
public:
    bool isPowerOfTwo(int n) {
        return (n>0)&&!(n&(n-1));
        //Pow2 means only one bit is 1.
        //So n&(n-1) -> 0.
    }
};

class Solution {
public:
    int minFlips(int a, int b, int c) {
        int result=0;
        while(a|b|c){
            if(c&1){
                if((a&1)|(b&1)){
                    //pass
                }else{
                    result++;
                }
            }else{
                result+=(a&1)+(b&1);
            }
            a>>=1;
            b>>=1;
            c>>=1;
        }
        return result;
    }
};

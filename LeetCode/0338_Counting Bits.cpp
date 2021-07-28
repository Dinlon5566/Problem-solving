class Solution {
public:
    vector<int> countBits(int n) {
        vector<int> result(n+1);
        result[0]=0;
        for(int i=1;i<=n;i++){
            int count=0;
            int move=i;
            while(move){
                count+=move&1;
                move>>=1;
            }
            result[i]=count;
        }
        return result;
    }
};

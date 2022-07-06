class Solution {
public:
    int candy(vector<int>& ratings) {
        int s=ratings.size();
        if(s<=1){
            return s;
        }
        vector<int> candy(s,1);
        //left to right
        for(int i=1;i<s;i++){
            if(ratings[i]>ratings[i-1]){
                candy[i]=candy[i-1]+1;
            }
        }
        //right to left
        for(int i=s-1;i>0;i--){
            if(ratings[i-1]>ratings[i]){
                candy[i-1]=max(candy[i-1],candy[i]+1);
            }
        }

        int res=0;
        for(int n:candy){
            res+=n;
        }
        return res;
    }
};

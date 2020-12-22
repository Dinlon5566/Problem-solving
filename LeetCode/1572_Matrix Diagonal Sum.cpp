class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int sum=0;
        int l=mat.size();
        if(l&1){
            sum-=mat[(l-1)/2][(l-1)/2];
        }
        for(int i=0;i<l;i++){
            sum+=mat[i][i];
            sum+=mat[i][l-i-1];
        }
        return sum;
    }
};
class Solution {
public:
    int maxCoins(vector<int>& piles) {
        sort(piles.begin(),piles.end());
        int n=piles.size()/3,sum=0,j=n*3-2;
        for(int i=0;i<n;i++,j-=2){
            sum+=piles[j];
        }
        return sum;
    }
};
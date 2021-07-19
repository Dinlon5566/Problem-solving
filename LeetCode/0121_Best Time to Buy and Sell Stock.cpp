class Solution {
public:
    int maxProfit(vector<int>& prices) {

        int profitMax=0;
        int priceMin=INT_MAX;
        for(int i=0;i<prices.size();i++){
            priceMin=min(priceMin,prices[i]);
            profitMax=max(profitMax,prices[i]-priceMin);
        }
        return profitMax;
    }
};

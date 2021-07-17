class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int benfit=0,nowHave=prices[0];
        int len=prices.size();
        for(int day=1;day<len;day++){
            if(nowHave<prices[day]){
                benfit+=prices[day]-nowHave;
                nowHave=prices[day];
            }else{
                nowHave=prices[day];
            }
        }
        return benfit;
    }
};

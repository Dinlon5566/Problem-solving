class Solution {
public:
    int countNegatives(vector<vector<int>>& grid) {
        int negativeCount=0;
        for(vector<int> vec:grid){
            for(int num:vec){
                if(num<0){
                    negativeCount++;
                }
            }
        }
        return negativeCount;
    }
};

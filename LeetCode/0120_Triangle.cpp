class Solution {
public:
    int minimumTotal(vector<vector<int>>& triangle) {

        vector<int> minarr(triangle.back());

        for(int lay=triangle.size()-2;lay>=0;lay--){
            for(int i=0;i<=lay;i++){
                minarr[i]=min(minarr[i],minarr[i+1])+triangle[lay][i];
            }
        }

        return minarr[0];

    }
};

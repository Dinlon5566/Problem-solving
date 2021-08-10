class Solution {
public:
    int heightChecker(vector<int>& heights) {
        int result=0;
        vector<int> copyHeights(heights);
        sort(copyHeights.begin(),copyHeights.end());
        for(int i=0;i<heights.size();i++)
            result+=!(copyHeights[i]==heights[i]);
        return result;
    }
};

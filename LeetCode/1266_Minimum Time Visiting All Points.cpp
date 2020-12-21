class Solution {
public:
    int minTimeToVisitAllPoints(vector<vector<int>>& points) {
        int path=0;
        int x,y; 
        for(int i=0;i<points.size()-1;i++){
            x=abs(points[i+1][0]-points[i][0]);
            y=abs(points[i+1][1]-points[i][1]);
            path+=max(x,y);
        }
        return path;
    }
};
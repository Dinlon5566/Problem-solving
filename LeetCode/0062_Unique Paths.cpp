class Solution {
public:
    int uniquePaths(int m, int n) {
        int gmap[m][n];
        for(int i=0;i<m;i++){
            gmap[i][0]=1;
        }
        for(int i=0;i<n;i++){
            gmap[0][i]=1;
        }
        for(int i=1;i<m;i++){
            for(int j=1;j<n;j++){
                gmap[i][j]=gmap[i-1][j]+gmap[i][j-1];
            }
        }
        return gmap[m-1][n-1];
    }
};

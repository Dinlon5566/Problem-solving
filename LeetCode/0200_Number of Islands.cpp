class Solution {
public:
    void cleaner(vector<vector<char>>& grid,int i,int j){
        if(i>=0&&i<grid.size()&&j>=0&&j<grid[0].size()&& grid[i][j]=='1' ){
            grid[i][j]='0';
            cleaner(grid,i,j-1);
            cleaner(grid,i,j+1);
            cleaner(grid,i-1,j);
            cleaner(grid,i+1,j);
        }
    }
    int numIslands(vector<vector<char>>& grid) {
        int islandNum=0;
        for(int i=0;i<grid.size();i++){
            for(int j=0;j<grid[0].size();j++){
                if(grid[i][j]=='1'){
                    cleaner(grid,i,j);
                    islandNum++;
                }
            }
        }
        return islandNum;
    }
};
